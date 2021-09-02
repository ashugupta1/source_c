/*#include<stdio.h>

int insertion(int arr[],int insert, int index, int size)
{
    int i;
    for ( i = size; i <= index; i--)
    {
        arr[size + 1] = arr[size ]; 
        printf("something");
    }

    arr[index] = insert;

    for ( i = 0; i < size ; i++)
    {
        printf("inserted array[%d] = %d\n",i, arr[i]);
    }

    
}

int main()
{
    int arr[10] = {10,20,30,40,50,60,80,90,100};
    
    int insert = 70, index = 6;

    int size = sizeof(arr)/sizeof(arr[0]);

    insertion(arr, insert, index, size);

    return 0;

}*/
#include <stdio.h>
 
int main()
{
    int arr[100] = { 0 };
    int i, x, pos, n = 10;
 
    // initial array of size 10
    for (i = 0; i < 10; i++)
        arr[i] = i + 1;
 
    // print the original array
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
 
    // element to be inserted
    x = 50;
 
    // position at which element
    // is to be inserted
    pos = 5;
 
    // increase the size by 1
    n++;
 
    // shift elements forward
    for (i = n-1; i >= pos; i--)
        arr[i] = arr[i - 1];
 
    // insert x at pos
    arr[pos - 1] = x;
 
    // print the updated array
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
 
    return 0;
}