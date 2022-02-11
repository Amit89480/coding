// #include<stdio.h>
// int fact(int num)
// {
//     if(num==1||num==0){
//         return 1;
//     }
//     else{
// return num*fact(num-1);
//     }
// }
// int main()
// {
//     int num;
//     scanf("%d",&num);
//     printf("the fatorial is %d\n",fact(num));
//     return 0;
// }
#include<stdio.h>
int fib(int n)
{
   if (n <= 1)
      return n;
   return fib(n-1) + fib(n-2);
}
 
int main ()
{
  int n;
  scanf("%d",&n);
  printf("%d", fib(n));
  getchar();
  return 0;
}
