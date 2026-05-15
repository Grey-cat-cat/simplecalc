#pragma once
#include "flow.h"

int main() {
  std::string text = "";
  std::string line = "";
  while (std::getline(std::cin, line)) {
    text += line + " ";
  }
  std::cout << Count(text);
  return 0;
}
