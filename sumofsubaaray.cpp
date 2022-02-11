#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,j,curr=0;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    for(i=0;i<n;i++){
     for ( j=i;j<n;j++){
         curr=curr+arr[j];
         cout<<curr<<"  ";
     }
    }
    cout<<endl;
}