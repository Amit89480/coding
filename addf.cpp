#include<iostream>
using namespace std;
int add(int a,int b)
{
    int c=a+b;
    return c;
}
int main(){
    int a,b,c;
    cin>>a>>b;
    cout<<add(a,b);
    return 0;
}