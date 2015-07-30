#include <bits/stdc++.h>

using namespace std;
int sum_of_first_n (int n);
main()
{
    int n, res;
    cout << "Enter the value of n" << endl;
    cin >> n;
    res = sum_of_first_n (n);
    cout << "Result=" << res << endl;
}

int sum_of_first_n(int n)
{
    if (n == 0 || n < 0)
        return 0;
    else
        return n + sum_of_first_n (n-1);
}



