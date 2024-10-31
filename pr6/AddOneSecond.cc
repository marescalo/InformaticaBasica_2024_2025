  /**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica
  *
  * @author Margarita Blanca Escobar Alonso alu0101567211@ull.edu.es
  * @date Oct 31 2024
  * @brief 
  *
  * @see 
  */

#include <iostream>
#include <iomanip>

int main () {
  int hour;
  int minute;
  int second;

  std::cin >> hour >> minute >> second;

  if ((second >=0)&&(second < 59)) {
    ++second;
  }

  else if (second >= 59) {
    second = 0;
    ++minute;
  }
       
  if (minute >= 60) {
    minute = 0;
    ++hour;
  }

  if (hour == 24) {
    std::cout << "00:00:00" << std::endl;
  
  }

  else { 
    if (second>9){
      if(minute>9){
        if(hour>9){
          std::cout << hour << ":" << minute << ":" << second << std::endl;
        }
        else {
          std::cout << "0" << hour << ":" << minute << ":" << second << std::endl;
        }
      }
      else {
        if (hour>9) {
          std::cout << hour << ":" << "0" << minute << ":" << second << std::endl;
        }
        else {
          std::cout << "0" << hour << ":" << "0" << minute << ":" << second << std::endl;
        }
      }
    }
  
    else {
      if (minute>9) {
        if(hour>9) {
          std::cout << hour << ":" << minute << ":" << "0" << second << std::endl;
        }
        else {
          std::cout << "0" << hour << ":" << minute << ":" << "0" << second << std::endl;
        }
     }
     else {
      if (hour>9) {
        std::cout << hour << ":" << "0" << minute << ":" << "0" << second << std::endl;
      }
      else {
        std::cout << "0" << hour << ":" << "0" << minute << ":" << "0" << second << std::endl;
      }
     }
    }
  }

  return 0;
}