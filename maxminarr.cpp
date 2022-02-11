#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n;
    cin>>n;
    
    int array[n];
    for(i=0;i<n;i++){
        cin>>array[i];
    }
    
    int maxno=array[0];
    int minno=array[0];
    
  if(array[i]>maxno)
  {
      maxno=array[i];

  }
  if(array[i]<minno)
{
    minno=array[i];
}
    cout<<maxno<<"  ";
    cout<<minno<<"  ";
   
    return 0;
}


