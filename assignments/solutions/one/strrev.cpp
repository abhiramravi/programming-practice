#include <bits/stdc++.h>

#define N 100

using namespace std;
main()
{
    char str[N],rev[N];
    int n;
    cout << "Enter number of characters\n";
    cin >> n;
    cout << "Enter the string\n";
    for (int i = 0; i <= n-2; i++)
        cin  >> str[i];
    rev[N-1]='\0';
    for (int i = 0; i <= n-2; i++)
    {
        rev[n-2-i] = str[i];
    }
    cout<<"Reverse\n";
    for (int i =0 ; i <= n-2; i++)
         
    {
        cout << rev[i];
    }
    cout << "\n";
}
    
    
