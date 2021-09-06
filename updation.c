#include <stdio.h>

void display(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d\n", arr[i]);
    }
    
}

int updation(int arr[], int size, int update, int found)
{
    int i;
    for (i = 0; i < size; i++)
    {
        if (arr[i] == found)
        {
            break;
        }
        
    }

    arr[i] = update; 
    
}

int main()
{
    int arr[10] = {10,20,30,40,50,60,70,80,90,100};
    int size = 10, update = 55, found = 10;

    printf("array before updation\n");
    display(arr, size );

    updation(arr, size, update, found);

    printf("array after updation\n");
    display(arr, size);

    return 0;

}

