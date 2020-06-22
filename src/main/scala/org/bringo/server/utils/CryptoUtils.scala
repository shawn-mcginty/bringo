package org.bringo.server.utils

import de.mkammerer.argon2.Argon2Factory

object CryptoUtils {
  def hashPasswod (pdub: String) = {
    val argon = Argon2Factory.create()
    argon.hash(10, 65536, 1, pdub.toCharArray())
  }
}
