#include <iostream>

int main()
{
    int n;
    std::cin >> n;
    int c = 0;
    while(n--)
    {
        int p,q;
        std::cin >> p >> q;
        if(p == q)
        {
            continue;
        } else if(q-p > 1)
        {
            c++;
        }
    }
    std::cout << c << std::endl;
    std::cin.get();
}
