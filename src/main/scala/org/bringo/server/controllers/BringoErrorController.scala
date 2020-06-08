package org.bringo.server.controllers

import javax.servlet.http.HttpServletRequest
import org.bringo.server.views.ErrorPage
import org.springframework.boot.web.servlet.error.ErrorController
import org.springframework.stereotype.Controller
import org.springframework.web.bind.annotation.RequestMapping
import org.springframework.web.servlet.ModelAndView

@Controller
class BringoErrorController extends ErrorController {

  override def getErrorPath: String = {
    "/error"
  }

  @RequestMapping(Array("/error"))
  def handleError(request: HttpServletRequest) :ModelAndView = {
    val v = new ErrorPage()
    val mav = new ModelAndView()
    mav.setView(v)
    mav
  }
}
