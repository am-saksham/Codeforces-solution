#include <iostream>
#include <string>
#include <algorithm>

int main()
{
    std::string s;
    std::cin >> s;
    
    for(int i = 0; i < s.length(); i=i+2)
    {
        for(int j = i+2; j < s.length(); j = j + 2)
        {
            if(s[i] > s[j])
            {
                std::swap(s[i], s[j]);
            }
        }
    }
    std::cout << s << "\n";
    std::cin.get();
}
