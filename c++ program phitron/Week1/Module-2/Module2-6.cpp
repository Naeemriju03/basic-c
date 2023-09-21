#include <bits/stdc++.h>
using namespace std;
int* fun()
{
    //int *a=new int[5]; //pointer dite hobe int a[5]; hobe na
    int a[5];
    for(int i=0;i<5;i++)
    {
        cin>>a[i];
    }
    return a;
}
int main()
{
    int *a =fun();
    for(int i=0;i<5;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
