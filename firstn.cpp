#include<bits/stdc++.h>
using namespace std;
int sum(int n){
    int b=0;
    for(int i=1;i<=n;i++)
    b=b+i;
    return b;
}
int main()
{
    int a;
    cin>>a;
    cout<<sum(a)<<endl;
    return 0;
}