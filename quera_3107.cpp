#include<iostream>

using namespace std;
int main()
{
int a[2];
int b[2];
cin>>a[0]>>a[1];
cin>>b[0]>>b[1];
if (b[0]<=a[1]&&b[1]<=a[1])
{
    cout<<"yes";
}else cout<<"no";
}