#include <iostream>


int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
  
    int n,k;
    std::cin >> n >> k;
    int a[n];
    for(int i = 0; i < n; i++)
    {
        std::cin >> a[i];
    }
    if(a[0] == 0)
    {
        std::cout << 0 << std::endl;
    }else
    { int c = 0;
    for(int i = 0; i < n; i++)
    {
        if(a[i] >= a[k-1] && a[i] != 0)
        {
            c++;
        }
    }
    std::cout << c << std::endl;
    }
    std::cin.get();
}
