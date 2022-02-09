#include<iostream>
#include <string>
#include <vector>

int main ()
{
  int n;
  std::cout << "n:";
  std::cin >> n;
  std::vector<std::string> answer;
  for (int i = 0, j = 1; i < n; ++i, ++j){
      if (j % 3 == 0 && j % 5 == 0)
	  answer.push_back("FizzBuzz");
 else if (j % 3 == 0)
	  answer.push_back("Fizz");
      else if (j % 5 == 0)
	  answer.push_back("Buzz");
      else	answer.push_back(std::to_string (j));
    }
  std::cout << "[";
  for (auto&& n : answer){
   std::cout << " \"" << n << "\"";
  }
  std::cout << "]";
  return 0;
}