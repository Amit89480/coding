#include<bits/stdc++.h>
using namespace std;


int linear(int arr[],int n,int key){

for(int i=1;i<n;i++){
    if(arr[i]==key){
        return i;
    }

}
    return -1;
}

int main(){
int s,key;
cin>>s;
int arr[s];
for(int i=0;i<s;i++){
    cin>>arr[i];
}
cin>>key;
cout<<linear(arr,s,key);
return 0;
}
