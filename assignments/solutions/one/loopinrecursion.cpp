#include<bits/stdc++.h>
using namespace std;
int search (int a[100],int i,int n,int key);
main()
{
    int n,a[100],key,res,i;
    cout << "Enter the number of elements"<<endl;
    cin >> n;
    cout << "Enter the elements"<<endl;
    for(i=0;i<n;i++)
    cin >> a[i];
    cout << "Enter the key"<<endl;
    cin >> key;
    res = search(a,0,n,key);
    cout << "result\t"<< res<<endl;
}

int search (int a[100], int i,int n,int key)
{

    if(a[i]==key)
        return 1;
    else
        i++;
    if(i<n)
        return search(a,i,n,key);
    else
        return 0;
                
}



