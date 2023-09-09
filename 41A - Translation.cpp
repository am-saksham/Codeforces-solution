#include <iostream>
#include <string>
#include <algorithm>

int main()
{
    std::string s;
    std::cin >> s;
    std::string t;
    std::cin >> t;
    
    std::reverse(s.begin(),s.end());
    
    if(s == t)
    {
        std::cout << "YES" << std::endl;
    } else
    {
        std::cout << "NO" << std::endl;
    }
    std::cin.get();
}
