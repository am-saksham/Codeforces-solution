#include <iostream>
#include <string>
#include <unordered_set>

int main()
{
    std::string s;
    std::cin >> s;
    
    std::unordered_set<char> str;
    
    for(int i = 0; i < s.length(); i++)
    {
        str.insert(s[i]);
    }
    
    if( str.size() % 2 == 0)
    {
        std::cout << "CHAT WITH HER!" << "\n";
    } else
    {
        std::cout << "IGNORE HIM!" << "\n";
    }
    std::cin.get();
}
