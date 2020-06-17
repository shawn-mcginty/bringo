package org.bringo.server.controllers

import org.bringo.server.views.HomePage
import org.springframework.web.bind.annotation.{GetMapping, ModelAttribute, PostMapping, RestController}
import org.springframework.web.servlet.ModelAndView

@RestController
class HomeController {

  @GetMapping(Array("/"))
  def homePage(): ModelAndView = {
    val v = new HomePage()
    val mav = new ModelAndView()
    mav.setView(v)
    mav
  }
}
