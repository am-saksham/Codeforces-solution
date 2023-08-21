#include <iostream>
#include <string>
#include <algorithm>

int main()
{
    std::string s;
    std::cin >> s;
    
    std::transform(s.begin(), s.end(), s.begin(), ::tolower);
    
    char arr[6] = {'a', 'e', 'i', 'o', 'u', 'y'};
    
    for(int i = 0; i < 6; i++)
    {
        s.erase(std::remove(s.begin(),s.end(), arr[i]), s.end());
    }
    
    for(int i = 0; i < s.length(); i++)
    {
        std::cout << '.' << s[i];
    }
    std::cout << "\n";
    std::cin.get();
}
