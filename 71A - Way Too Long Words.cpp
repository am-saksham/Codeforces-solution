#include <iostream>
#include <string>
 
int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
  
    int t;
    std::cin >> t;
    while(t--)
    {
        std::string s;
        std::cin >> s;
        int l = s.length();
        if(l > 10)
        {
        std::string str = s.substr(1,l-2);
        int len = str.length();
        std::cout <<  s.at(0) << len <<  s.at(l-1) << std::endl;
        } else
        {
            std::cout << s << std::endl;
        }
    }
    std::cin.get();
}
