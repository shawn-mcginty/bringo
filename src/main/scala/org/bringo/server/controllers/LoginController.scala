package org.bringo.server.controllers

import org.bringo.server.models.LoginForm
import org.bringo.server.views.LoginPage
import org.springframework.web.bind.annotation.{GetMapping, ModelAttribute, PostMapping, RestController}
import org.springframework.web.servlet.ModelAndView

@RestController
class LoginController {

	@GetMapping(Array("/login"))
	def loginPage(): ModelAndView = {
		val v = new LoginPage()
		val mav = new ModelAndView()
		mav.setView(v)
		mav
	}

	@PostMapping(Array("/login"))
	def loginForm(@ModelAttribute form: LoginForm): ModelAndView = {
		val v = new LoginPage()
		val mav = new ModelAndView()
		mav.setView(v)
		mav
	}
}