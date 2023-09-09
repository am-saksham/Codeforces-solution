#include <iostream>
#include <vector>

int main()
{
    int n,h;
    std::cin >> n >> h;
    std::vector<int> a;
    int c1 = 0, c2 = 0;
    for(int i = 0; i < n; i++)
    {
        int pos;
        std::cin >> pos;
        a.push_back(pos);
        if(pos <= h)
        {
            c1++;
        } else
        {
            c2++;
        }
    }
    int ans = (c1 * 1) + (c2 * 2);
    std::cout <<  ans << std::endl;
    std::cin.get();
}
