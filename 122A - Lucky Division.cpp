#include <iostream>
#include <vector>

int main()
{
    std::vector<int> lucky_number = {4,7,47,74,44,444,447,474,477,777,774,744};
    int n;
    std::cin >> n;
    int count = 0;
    for(int i = 0; i < 12; i++)
    {
        if(n % lucky_number[i] == 0)
        {
            count++;
        }
    }
    if(count > 0)
    {
        std::cout << "YES" << std::endl;
    } else
    {
        std::cout << "NO" << std::endl;
    }
    std::cin.get();
}
