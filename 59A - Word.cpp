#include <iostream>
#include <string>
#include <algorithm>

int main()
{
    std::string s;
    std::cin >> s;
    
    int upper = 0, lower = 0;
    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] >= 'A' && s[i] <= 'Z')
        {
            upper++;
        } else if(s[i] >= 'a' && s[i] <= 'z')
        {
            lower++;
        }
    }
    
    if(upper > lower)
    {
        std::transform(s.begin(), s.end(), s.begin(), ::toupper);
        std::cout << s << "\n";
    } else
    {
        std::transform(s.begin(), s.end(), s.begin(), ::tolower);
        std::cout << s << "\n";
    }
    std::cin.get();
}
