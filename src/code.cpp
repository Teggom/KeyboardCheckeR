#include <Windows.h>
#include <stdio.h>
#include <string>
#include <Rcpp.h>
using namespace Rcpp;


// [[Rcpp::export]]
std::string getKeyboard()
{
  //LGLSXP pressed = PROTECT(allocateVector(LGLSXP, 12));
  //REALSXP pressed = PROTECT(allocVactor(REALSXP, 12));
  std::string pressed = "";

  /* We now query the keyboard for each pressed key
  * The goal here is to append them all to a string
  * and return this string to R for more processing.
  *
  * docs.microsoft.com/en-us/windows/win32/inputdev/virtual-key-codes
  */
  if(GetKeyState(VK_LBUTTON) & 0x8000)
  {
    pressed.append("LeftMouse|");
  }
  if(GetKeyState(VK_RBUTTON) & 0x8000)
  {
    pressed.append("RightMouse|");
  }
  if(GetKeyState(VK_BACK) & 0x8000)
  {
    pressed.append("Backspace|");
  }
  if(GetKeyState(VK_RETURN) & 0x8000)
  {
    pressed.append("Enter|");
  }
  if(GetKeyState(VK_SPACE) & 0x8000)
  {
    pressed.append("Spacebar|");
  }
  if(GetKeyState(0x1B) & 0x8000)
  {
    pressed.append("esc|");
  }
  if(GetKeyState(VK_PRIOR) & 0x8000)
  {
    pressed.append("PageUp|");
  }
  if(GetKeyState(VK_NEXT) & 0x8000)
  {
    pressed.append("PageDown|");
  }
  if(GetKeyState(VK_SHIFT) & 0x8000)
  {
    pressed.append("Shift|");
  }
  if(GetKeyState(VK_LEFT) & 0x8000)
  {
    pressed.append("Left|");
  }
  if(GetKeyState(VK_UP) & 0x8000)
  {
    pressed.append("Up|");
  }
  if(GetKeyState(VK_DOWN) & 0x8000)
  {
    pressed.append("Down|");
  }
  if(GetKeyState(VK_RIGHT) & 0x8000)
  {
    pressed.append("Right|");
  }
  if(GetKeyState(VK_SNAPSHOT) & 0x8000)
  {
    pressed.append("PrintScreen|");
  }
  if(GetKeyState(0x30) & 0x8000)
  {
    pressed.append("0|");
  }
  if(GetKeyState(0x31) & 0x8000)
  {
    pressed.append("1|");
  }
  if(GetKeyState(0x32) & 0x8000)
  {
    pressed.append("2|");
  }
  if(GetKeyState(0x33) & 0x8000)
  {
    pressed.append("3|");
  }
  if(GetKeyState(0x34) & 0x8000)
  {
    pressed.append("4|");
  }
  if(GetKeyState(0x35) & 0x8000)
  {
    pressed.append("5|");
  }
  if(GetKeyState(0x36) & 0x8000)
  {
    pressed.append("6|");
  }
  if(GetKeyState(0x37) & 0x8000)
  {
    pressed.append("7|");
  }
  if(GetKeyState(0x38) & 0x8000)
  {
    pressed.append("8|");
  }
  if(GetKeyState(0x39) & 0x8000)
  {
    pressed.append("9|");
  }
  if(GetKeyState(0x41) & 0x8000)
  {
    pressed.append("A|");
  }
  if(GetKeyState(0x42) & 0x8000)
  {
    pressed.append("B|");
  }
  if(GetKeyState(0x43) & 0x8000)
  {
    pressed.append("C|");
  }
  if(GetKeyState(0x44) & 0x8000)
  {
    pressed.append("D|");
  }
  if(GetKeyState(0x45) & 0x8000)
  {
    pressed.append("E|");
  }
  if(GetKeyState(0x46) & 0x8000)
  {
    pressed.append("F|");
  }
  if(GetKeyState(0x47) & 0x8000)
  {
    pressed.append("G|");
  }
  if(GetKeyState(0x48) & 0x8000)
  {
    pressed.append("H|");
  }
  if(GetKeyState(0x49) & 0x8000)
  {
    pressed.append("I|");
  }
  if(GetKeyState(0x4A) & 0x8000)
  {
    pressed.append("J|");
  }
  if(GetKeyState(0x4B) & 0x8000)
  {
    pressed.append("K|");
  }
  if(GetKeyState(0x4C) & 0x8000)
  {
    pressed.append("L|");
  }
  if(GetKeyState(0x4D) & 0x8000)
  {
    pressed.append("M|");
  }
  if(GetKeyState(0x4E) & 0x8000)
  {
    pressed.append("N|");
  }
  if(GetKeyState(0x4F) & 0x8000)
  {
    pressed.append("O|");
  }
  if(GetKeyState(0x50) & 0x8000)
  {
    pressed.append("P|");
  }
  if(GetKeyState(0x51) & 0x8000)
  {
    pressed.append("Q|");
  }
  if(GetKeyState(0x52) & 0x8000)
  {
    pressed.append("R|");
  }
  if(GetKeyState(0x53) & 0x8000)
  {
    pressed.append("S|");
  }
  if(GetKeyState(0x54) & 0x8000)
  {
    pressed.append("T|");
  }
  if(GetKeyState(0x55) & 0x8000)
  {
    pressed.append("U|");
  }
  if(GetKeyState(0x56) & 0x8000)
  {
    pressed.append("V|");
  }
  if(GetKeyState(0x57) & 0x8000)
  {
    pressed.append("W|");
  }
  if(GetKeyState(0x58) & 0x8000)
  {
    pressed.append("X|");
  }
  if(GetKeyState(0x59) & 0x8000)
  {
    pressed.append("Y|");
  }
  if(GetKeyState(0x5A) & 0x8000)
  {
    pressed.append("Z|");
  }
  return pressed;
}
