#include<iostream>
using namespace std;
int main()
{
    int n,last,sum=0;
    cin>>n;
    int orn=n;
    while(n>0)
    {
        last=n%10;
         sum=sum+last*last*last;
         n=n/10;
    }
   if(orn==sum){
       cout<<"Armstrong";
   }else{
       cout<<"not";
   }
    return 0;
}