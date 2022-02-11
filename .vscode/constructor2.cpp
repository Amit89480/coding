#include<iostream>
using namespace std;
class complex{
    int a,b;
    public:
    complex(void);
    void print(){
        cout<<a+b;
    }

};
complex :: complex(void){
    a=10;
    b=30;
}
int main()
{
    complex a;
    a.print();
    return 0;
}