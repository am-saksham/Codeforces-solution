#include <iostream>

int main()
{
    int k,n,w;
    std::cin >> k >> n >> w;
    
    int price = 0;
    for(int i = 1; i <= w; i++)
    {
        price = price + (k*i);
    }
    
    if(price > n)
    {
        std::cout <<  price - n << "\n";
    } else
    {
        std::cout << 0 << "\n";
    }
    std::cin.get();
}
