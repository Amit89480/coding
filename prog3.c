#include<stdio.h>
int main()
{
    int a;
    printf("Enter 1 for 'overthinking',Enter 2 for 'Misti':    ");
    scanf("%d",&a);
    if(a==1)
    {
        printf("Misti will walk away!");

    }
    else if(a==2)
    {
        printf("Misti will hug and kiss");
    }
    return 0;
}