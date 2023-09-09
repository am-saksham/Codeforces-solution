#include <iostream>
#include <string>

int main()
{
    int n,t;
    std::cin >> n >> t;
    std::string s;
    std::cin >> s;
    
    while(t--)
    {
        for(int i = 0; i < n; i++)
        {
            if(s[i] == 'G' && s[i-1] == 'B')
            {
                s[i] = 'B';
                s[i-1] = 'G';
                i++;
            }
        }
    }
    std::cout << s << std::endl;
    std::cin.get();
}
