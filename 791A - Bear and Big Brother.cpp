#include <iostream>

int main()
{
    int x,y;
    std::cin >> x >> y;
    
    int c = 1;
    for( ; ; )
    {
        x = x * 3;
        y = y * 2;
        if(x <= y)
        {
            c++;
            continue;
        } else
        {
            break;
        }
    }
    std::cout << c << "\n";
    std::cin.get();
}
