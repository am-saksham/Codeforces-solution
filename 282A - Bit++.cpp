#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
  
    int t, c = 0;
    std::cin >> t;
    while(t--)
    {
        std::string s;
        std::cin >> s;
        
        if(s == "++X" || s == "X++")
        {
            c++;
        } else if(s == "--X" || s == "X--")
        {
            c--;
        }
    }
    std::cout << c << "\n";
    std::cin.get();
}
