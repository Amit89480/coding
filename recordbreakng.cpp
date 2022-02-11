#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,fact;
	cin>>n;
	int ar[n];
	for(int i=1;i<n;i++){
		cin>>ar[n];
	}
	for(int i=1;i<n;i++){
		fact=fact*i;
		cout<<fact<<endl;
	}
	cout<<endl;
	
	return 0;
}