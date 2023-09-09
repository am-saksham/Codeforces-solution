#include <iostream>
#include <cmath>

int main()
{
    int t;
    std::cin >> t;
    int capacity = 0;
    int stillnow = 0;
    while(t--)
    {
        int a,b;
        std::cin >> a >> b;
        stillnow = stillnow - a;
        stillnow = stillnow + b;
        capacity = std::max(capacity, stillnow);
    }
    std::cout << capacity << std::endl;
    std::cin.get();
}
