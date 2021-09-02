#include<stdio.h>

int insertion(int arr[],int insert, int index, int size)
{
    int i;
    for ( i = size - 2; i >= index; i--)
    {
        arr[size - 1] = arr[size - 2]; 
        size--;
    }

    arr[index] = insert;

    for ( i = 0; i < 10; i++)
    {
        printf("inserted array[%d] = %d\n",i, arr[i]);
        
    }

    
}

int main()
{
    int arr[10] = {10,20,30,40,50,70,80,90,100};
    
    int insert = 60, index = 5;

    int size = sizeof(arr)/sizeof(arr[0]);

    insertion(arr, insert, index, size);

    return 0;

}