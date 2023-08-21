#include <iostream>

int main()
{
    std::string s;
    std::cin >> s;
    
    std::string s1 = "1111111";
    std::string s2 = "0000000";
    
    std::size_t found1 = s.find(s1);
    std::size_t found2 = s.find(s2);
    
    if(found1 != std::string::npos || found2 != std::string::npos)
    {
        std::cout << "YES" << "\n";
    } else
    {
        std::cout << "NO" << "\n";
    }
    std::cin.get();
}
