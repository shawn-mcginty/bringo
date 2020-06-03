package org.bringo.server.controllers

import org.fusesource.scalate.TemplateEngine
import org.springframework.web.bind.annotation.{GetMapping, ResponseBody}
import org.springframework.stereotype.Controller

@Controller
class LoginController {
	val engine = new TemplateEngine
	val loginPageMarkup: String = engine.layout("templates/login.mustache")

	@GetMapping(Array("/login"))
	@ResponseBody
	def loginPage(): String = {
		loginPageMarkup
	}
}