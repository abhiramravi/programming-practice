#include <bits/stdc++.h>
using namespace std;
int fact(int n);
main()
{
    int n,res;
    cout << "Enter the number" ;
    cin >> n;
    res = fact(n);
    cout << "The factorial ="<<res;
   
}

int fact(int n)
{
    cout << n << endl;
    if (n == 0)
        return 1;
    else 
        if (n == 1)
            return 1;
        else
            return n * fact(n-1) ;
}
    
