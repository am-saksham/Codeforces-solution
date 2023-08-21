#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>

int main()
{
    std::string s;
    std::cin >> s;
    
    s[0] = std::toupper(s[0]);
    
    std::cout <<  s << "\n";
    std::cin.get();
}
