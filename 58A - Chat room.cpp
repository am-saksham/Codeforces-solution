#include <iostream>
#include <string>

int main()
{
    std::string s;
    std::cin >> s;
    std::string str = "hello";
    
    int j = 0, c = 0;
    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] == str[j])
        {
            j++;
            c++;
        }
    }
    if(c == 5)
    {
        std::cout << "YES" << std::endl;
    } else
    {
        std::cout << "NO" << std::endl;
    }
    std::cin.get();
}
