#include "flow.h"


size_t Count(const std::string& text) {
  std::unordered_set<std::string> unique;
  std::istringstream textt(text);
  std::string word = "";
  while (textt >> word) {
    unique.emplace(word);
  }
  return unique.size();;
}