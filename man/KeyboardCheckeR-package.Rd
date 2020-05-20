\name{KeyboardCheckeR-package}
\alias{KeyboardCheckeR-package}
\alias{KeyboardCheckeR}
\docType{package}
\title{
  Query Your Keyboard Strokes
}
\description{
  This package was built to allow easy keyboard reading in R. Calling QueryKeyboard() will return a character vector of all hit supported keys. This package is best used with something running in real time that could or should recieve inputs, such as the RGL package. 

}
\details{
  The most important function is QueryKeyboard(). 
  The only argument is preparse (Default=TRUE), which will return a character vector
  of the currently pressed keys. If preparse=FALSE, it will return a single string of all hit keys. 
}
\author{
Stephen Kozak

Maintainer: Stephen Kozak <Stephenkozak38@gmail.com>
}
\references{}
\keyword{ package }
\seealso{}
\examples{
  \dontrun{
     ## A simple way to check your keyboard.
     ## Run this and hold down some keys 
     ##  until the Sys.sleep() ends.
     Sys.sleep(2);QueryKeyboard()
  }
}
