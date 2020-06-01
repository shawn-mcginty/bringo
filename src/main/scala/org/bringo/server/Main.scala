package org.bringo.server

import com.typesafe.scalalogging.Logger
import cats.effect._
import cats.implicits._
import doobie._
import doobie.implicits._
import doobie.hikari._

object Main extends IOApp {

  val transactor: Resource[IO, HikariTransactor[IO]] =
    for {
      ce <- ExecutionContexts.fixedThreadPool[IO](32)
      be <- Blocker[IO]
      xa <- HikariTransactor.newHikariTransactor[IO](
        "org.postgresql.Driver", // driver classname
        "jdbc:postgresql:bringo_dev", // connection string
        "bringo",
        "bringo1",
        ce,
        be)
    } yield xa

  def run (args: List[String]): IO[ExitCode] = transactor.use { xa =>
    val logger = Logger("org.bringo.server.Main")
    logger.info("Hello")

    for {
      n <- sql"select 42".query[Int].unique.transact(xa)
      _ <- IO(println(n))
    } yield ExitCode.Success
  }
}