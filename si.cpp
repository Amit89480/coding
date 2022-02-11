#include<iostream>
using namespace std;

	int main(){
		int a=20;
		int* b=&a;
		int** c=&b;
		cout<<*c;
		return 0;
	}