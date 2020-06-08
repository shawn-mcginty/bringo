package org.bringo.server.views

import java.util

import javax.servlet.RequestDispatcher
import javax.servlet.http.{HttpServletRequest, HttpServletResponse}
import org.fusesource.scalate.TemplateEngine
import org.springframework.web.servlet.View

class ErrorPage extends View {
  val engine = new TemplateEngine
  val errorPageMarkup = engine.layout(uri="templates/error.mustache")
  override def render(model: util.Map[String, _], request: HttpServletRequest, response: HttpServletResponse): Unit = {
    val status = Option(request.getAttribute(RequestDispatcher.ERROR_STATUS_CODE)) match {
      case Some(errorCode) => errorCode.toString().toInt
      case None => 500
    }

    response.setStatus(status)
    response.addHeader("content-type", "text/html")
    response.setContentLength(errorPageMarkup.length())
    response.getWriter().write(errorPageMarkup)
  }
}
