/**
 * String stream - converting string to numerical values
 * - include <sstrem>
 * - std::getline(std::cin, strVar);
 * - std::stringstream(strVar) >> numVar;
 * http://www.cplusplus.com/reference/sstream/
 */

#include <iostream>
#include <sstream>
#include <string>

int main()
{
  std::string strVar;
  float length;
  float width;
  std::cout << "Insert room lenght: ";
  std::getline(std::cin, strVar);
  std::stringstream(strVar) >> length;
  //std::cout << std::endl << lenght;
  std::cout << "Insert room width: ";
  std::getline(std::cin, strVar);
  std::stringstream(strVar) >> width;
  std::cout << "Area: " << (length * width) << std::endl;

  return 0;
}

