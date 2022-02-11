#include<stdio.h>
#include<string.h>
int main()
{
    char s1[]="misti";
    char s2[]=" zmit";
    printf("%d\n",strlen(s2));
    puts(strcat(s1,s2));
    puts(strrev(s1));
    printf("%d\n",strcmp(s1,s2));
    return 0;
}