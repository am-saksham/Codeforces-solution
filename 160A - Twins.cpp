#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    int n;
    std::cin >> n;
    std::vector<int> a;
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        int p;
        std::cin >> p;
        a.push_back(p);
        sum += p;
    }
    sum = sum / 2;
    
    std::sort(a.begin(), a.end());
    
    int c = 0, ans = 0;
    
    for(int i = n-1; i >= 0; i--)
    {
        ans += a[i];
        c++;
        if(ans > sum)
        {
            break;
        }
    }
    std::cout << c << std::endl;
    std::cin.get();
}
