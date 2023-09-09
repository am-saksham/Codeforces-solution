#include <iostream>

int main()
{
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);
    
    int n;
    std::cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }
    
    int c = 0;
    for(int i = 0; i < n-1; i++)
    {
        if(arr[i] != arr[i+1])
        {
            c++;
        } else
        {
            continue;
        }
    }
    std::cout << c + 1 << "\n";
    std::cin.get();
}
