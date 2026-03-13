#include <iostream>
#pragma once
#include "calc.h"

int main() {
  int input = 0;
  int a = 0;
  int b = 0;

  while(true) {
    std::cout <<"input 0 to end\n" << "input 1 to add\n" << "input 2 to multiplicate\n" <<"input 3 to divide\n" << "input 4 to subtr\n";
    std::cin >> input;
    if ((input <= 0) || (input > 4)) {
      break;
    }
    if (input == 1) {
      std::cout << "A - B  Input A, and B\n";
      std::cin >> b >> a;
      std::cout << Add(a, b) << "\n";
    }
    if (input == 2) {
      std::cout << "A * B  Input A, and B\n";
      std::cin >> a >> b;
      std::cout << Mult(a, b) << "\n";
    }
    if (input == 3) {
      std::cout << "A / B  Input A, and B\n";
      std::cin >> a >> b;
      try {
        std::cout << Div(a, b) << "\n";
      }
      catch (...) {
        std::cout << "Can not divide by 0\n";
      }
    }
    if (input == 4) {
      std::cout << "A - B  Input A, and B\n";
      std::cin >> a >> b;
      std::cout << Sub(a, b) << "\n";
    }
  }
  std::cout << "end\n";
  return 0;
}

