
#include<stdio.h>

void display(int arr[], int size )
{
    for (int i = 0; i < size; i++)
    {
        printf("%d\n",arr[i]);
    }
    
}

int insertion(int arr[],int insert, int index, int size, int capacity)
{
    if (size >= capacity)
    {
        return -1;
    }
    
     for ( int i = size - 1; i >= index; i--)
    {
        arr[i+1] = arr[i]; 
    }

        arr[index] = insert;
        return 1;
}

int main()
{
    int arr[100] = {10,20,30,40,50,70,80,90,100};
    int insert = 60, index = 5, size = 9; 
    
    printf("array before insertion \n");
    display(arr, size);

    printf("array after insetion\n ");
    insertion(arr, insert, index, size, 100);

    size += 1;

    display(arr, size);

    return 0;

}