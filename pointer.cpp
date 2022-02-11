#include<iostream>
using namespace std;
int main()
{
    int a=64;
    int* b=&a;
    cout<<*b++<<endl;
    cout<<*b+1<<endl;
    cout<<*b+2<<endl;
    cout<<*b+3<<endl;
}