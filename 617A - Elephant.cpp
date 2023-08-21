#include <iostream>

int main()
{
    int n , sum = 0;
    int a[5] = {5,4,3,2,1};
    std::cin >> n;
    
    for(int i = 0; i < 5; i++)
    {
        sum = sum + (n/a[i]);
        n = n % a[i];
    }
    std::cout << sum << "\n";
    std::cin.get();
}
