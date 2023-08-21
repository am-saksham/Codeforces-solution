#include <iostream>
#include <string>
#include <algorithm>

int main()
{
    std::string s1,s2;
    std::cin >> s1;
    std::cin >> s2;
    
    std::transform(s1.begin(), s1.end(), s1.begin(),::tolower);
    std::transform(s2.begin(), s2.end(), s2.begin(),::tolower);
    
    int res = s1.compare(s2);
    
    if(res == 0)
    {
        std::cout << 0 << "\n";
    } else if(res < 0)
    {
        std::cout << -1 << "\n";
    } else
    {
        std::cout << 1 << "\n";
    }
    std::cin.get();
}
 
