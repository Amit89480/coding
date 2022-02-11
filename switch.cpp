#include<iostream>
using namespace std;
int main()
{
    int n,m,c;
    char ch;
    cout<<"Enter the two numbers   ";
    cin>>m>>n;
    cout<<"Enter the operator(+,-,*,/)    ";
    cin>>ch;
    switch (ch)
    {
    case '+':
      c=m+n;
      cout<<"Add  "<<c;
        break;
        case '-':
        c=m-n;
        cout<<"sub  "<<c;
        break;
        case '*':
        c=m*n;
        cout<<"Mul  "<<c;
        break;
        case '/':
          c=m/n;
          cout<<"divide   "<<c;
          break;
    default:
    cout<<"Wrong choice"<<endl;
        break;
    }
    return 0;
}