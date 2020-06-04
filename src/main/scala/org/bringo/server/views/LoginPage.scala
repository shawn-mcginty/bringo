package org.bringo.server.views

import java.util

import javax.servlet.http.{HttpServletRequest, HttpServletResponse}
import org.fusesource.scalate.TemplateEngine
import org.springframework.web.servlet.View

class LoginPage extends View {
  val engine = new TemplateEngine
  val loginPageMarkup: String = engine.layout(uri = "templates/login.mustache")
  override def render(model: util.Map[String, _], request: HttpServletRequest, response: HttpServletResponse): Unit = {
    response.setStatus(200)
    response.addHeader("content-type", "text/html")
    response.setContentLength(loginPageMarkup.length())
    response.getWriter().write(loginPageMarkup)
  }
}
