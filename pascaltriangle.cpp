#include<iostream>
using namespace std;
int fact(int n){
int factorial=1;
    for(int i=2;i<=n;i++){
        factorial=factorial*i;
    }
    return factorial;
}
int main(){
    int i,j,n;
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
         cout<<fact(i)/(fact(j)*fact(i-j))<<" ";

        }
        cout<<endl;
    }
    return 0;
}