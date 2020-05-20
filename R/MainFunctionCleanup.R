#' The Keyboard Query Function
#'
#' Will check your keyboard for any pressed keys.
#' @param preparse Will give pressed keys as a list or single string. Defaults to TRUE
#' @keywords keyboard
#' @export
#' @examples
#' Sys.sleep(1)
#' QueryKeyboard()
QueryKeyboard <- function (preparse = T) {
  if (preparse) {
    return(strsplit(getKeyboard(), "\\|")[[1]])
  } else {
    return(getKeyboard())
  }
}
