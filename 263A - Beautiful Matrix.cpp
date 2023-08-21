#include <iostream>
#include <cmath>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
  
    int arr[5][5];
    int target = 1;
    int row = -1, col = -1;
    
    
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            std::cin >> arr[i][j];
        }
    }
    
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            if(arr[i][j] == target)
            {
                row  = i;
                col = j;
                break;
            }
        }
    }
    int steps = abs(row - 2) + abs(col - 2);
    std::cout << steps << "\n";
    std::cin.get();
}
