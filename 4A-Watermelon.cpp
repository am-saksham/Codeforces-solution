#include <iostream>
 
int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
  
    int w;
    std::cin >> w;
    if(w % 2 == 0 && w > 2)
    {
        std::cout << "YES" << endl;
    } else
    {
        std::cout << "NO" << endl;
    }
    std::cin.get();
}
