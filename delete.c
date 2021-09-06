#include<stdio.h>

void display(int arr[], int size )
{
    for (int i = 0; i < size; i++)
    {
        printf("%d\n",arr[i]);
    }
    
}

int deletion(int arr[], int size, int delete )
{
    int i;
    for (i = 0; i < size; i++)
    {
        if (arr[i] == delete)
        {
            break;
        }        
    }

    for ( i = i+1 ; i < size ; i++)
    {
        arr[i-1] = arr[i];
    }
    
}

int main()
{
    int arr[100] = {10,20,30,40,50,60,70,80,90,100};
    int size = 10, delete = 50; 

    printf("display before deletion\n");
    display(arr, size);

    deletion(arr, size, delete);
    
    size--;
    printf("array after deletion\n");
    display(arr, size);

    return 0;

}