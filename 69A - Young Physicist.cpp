#include <iostream>

int main()
{
    int t;
    std::cin >> t;
    int xsum = 0, ysum = 0, zsum = 0;
    while(t--)
    {
        int a,b,c;
        std::cin >> a >> b >> c;
        
        xsum = xsum + a;
        ysum = ysum + b;
        zsum = zsum + c;
    }
    
    if(xsum == 0 && ysum == 0 && zsum == 0)
    {
        std::cout << "YES" << "\n";
    } else
    {
        std::cout << "NO" << "\n";
    }
    std::cin.get();
}
