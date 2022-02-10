#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
#include <sstream>
bool is_mountain(std::vector <int>& v)
{
    if (v.size() >= 3) {
        int size = v.size() - 1; int count{};
        for (int i{}; i < size; ++i) {
            if (v[i] < v[i + 1]) {++count;continue;}
            else if(count!=0){
                for (; i < size; ++i) {
                    if (v[i] > v[i + 1]) continue;
                    else return false;
                }
                return true;
            }
        }
    }
    return false;
}
int main()
{
    std::vector <int> v;
    std::string line; std::cout << "Input:";
    getline(std::cin, line);
    std::istringstream l(line);
    copy(std::istream_iterator <int>(l), std::istream_iterator<int>(), back_inserter(v));
    std::cout << '\n';
    (is_mountain(v)) ? std::cout << "Output:" << "true" << '\n' : std::cout << "Output:" << "false" << '\n';
}