#include<stdio.h>
 
 
void display(int arr[], int n){
    // Code for Traversal
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");   
}
 
void indInsertion(int arr[], int size, int element, int capacity, int index){
    // code for Insertion
    if(size>=capacity){
        printf("Insertion failed");
    }
    for (int i = size-1; i >=index; i--)
    {
        arr[i+1] = arr[i];
    }
    arr[index] = element;
    printf("Insertion Successful\n");
}
 
int main(){
    int arr[5] = {7, 8, 12, 27, 88};
    int size = 5, element = 45, index=1;
    display(arr, size); 
    indInsertion(arr, size, element, 5, index);
    size +=1;
    display(arr, size);
    return 0;
}
