package org.bringo.server

import com.typesafe.scalalogging.Logger

object Main {
  def main (argv: Array[String]): Unit = {
    val logger = Logger("org.bringo.server.Main")
    logger.info("Hello")
  }
}