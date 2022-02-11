#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,j,current=0,t;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    for(i=1;i<n;i++)
    {
        current=arr[i];
        j=i-1;
        while (arr[i]>current&&j>=0)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=current;
        
    
    }
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
}