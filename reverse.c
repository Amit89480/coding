
#include <stdio.h>
void arrayRev(int arr[])
{
    int temp;
    for (int i = 0; i < 5/2; i++)
    {
        //swap item arr[i] with arr[6-i]
        temp = arr[i]; 
        arr[i] = arr[4-i];
        arr[4-i] = temp;
    }
}

void arrayPrint(int arr[])
{
    for (int i = 0; i < 5; i++)
    {
        printf("The value of element %d is %d\n", i, arr[i]);
    }
}
int main()
{
    int arr[] = {1,2,3,4,5};
    printf("Before reversing the array\n");
    arrayPrint(arr);
    arrayRev(arr);
    printf("\nAfter reversing the array\n");
    arrayPrint(arr);
    
    
    return 0;
}
