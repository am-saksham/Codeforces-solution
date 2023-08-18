#include <iostream>
#include <cmath>


int main()
{
   std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
  
    double n, m, a;
    std::cin >> n >> m >> a;
    
    std::cout << (long long) ceil(n/a) * (long long) ceil(m/a) << std::endl;
    
    std::cin.get();
}
