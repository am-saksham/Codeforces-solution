#include <iostream>
#include <vector>

int main()
{
    int n;
    std::cin >> n;
    std::vector<int> people;
    for(int i = 0; i < n; i++)
    {
        int a;
        std::cin >> a;
        people.push_back(a);
    }
    
    int c = 0;
    for(int i = 0; i < n; i++)
    {
        if(people[i] == 1)
        {
            c++;
        }
    }
    
    if(c > 0)
    {
        std::cout << "HARD" << std::endl;
    } else
    {
        std::cout << "EASY" << std::endl;
    }
    std::cin.get();
}
