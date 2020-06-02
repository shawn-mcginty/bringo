package org.bringo.server.controllers

import cats.effect.IO
import doobie.hikari.HikariTransactor
import io.finch._

class LoginController(val xa: HikariTransactor[IO]) extends Endpoint.Module[IO]{
	case class LoginBody(uname: String, pdub: String)
	case class LoginResponse(goodLogin: Boolean)
	val postLoginHandler: Endpoint[IO, LoginResponse] = get("login") { Ok(LoginResponse(true)) }
}