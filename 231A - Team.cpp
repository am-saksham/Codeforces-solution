#include <iostream>

 
int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
  
    int n,d=0;
    std::cin >> n;
    while(n--)
    {   
        int a,b,c;
        std::cin >> a >> b >> c;
        if((a==1&&b==1&&c==1)||(a==0&&b==1&&c==1)||(a==1&&b==1&&c==0)||(a==1&&b==0&&c==1))
        d++;
    }
    std::cout << d << std::endl;
    std::cin.get();
}
