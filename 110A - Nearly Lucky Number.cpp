#include <iostream>
#include <string>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    
    string s = to_string(n);
    
    int c = 0;
    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] == '4' || s[i] == '7')
        {
            c++;
        }
    }
    if(c == 4 || c == 7)
    {
        cout << "YES" << endl;
    } else
    {
        cout << "NO" << endl;
    }
    cin.get();
}
