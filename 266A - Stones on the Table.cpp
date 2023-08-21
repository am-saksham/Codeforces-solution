#include <iostream>
#include <string>

int main()
{
    int n;
    std::cin >> n;
    std::string s;
    std::cin >> s;
    
    int c = 0;
    for(int i = 0; i < n-1; i++)
    {
        if(s[i] == s[i+1])
        {
            c++;
        }
    }
    std::cout << c << "\n";
    std::cin.get();
}
