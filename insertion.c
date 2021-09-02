#include<stdio.h>

int main()
{
    int max_size = 100;

    int arr[max_size], index, insert, num, i;

    printf("enter size of array = ");
    scanf("%d", &num);

    printf("enter array elements ");
    for ( i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("enter value you want to insert ");
    scanf("%d", &insert);

    printf("enter index ");
    scanf("%d", &index);

    printf("before insertion of array ");
    for ( i = 0; i < num; i++)
    {
        printf("arr[%d] %d\n", i, arr[i]);
    }

    num++;

    for ( i = num - 2; i >= index; i--)
    {
        arr[num] = arr[num-1];
        printf("excuted\n");
    }

    arr[index] = insert;

    printf("after insertion of array");
    for ( i = 0; i < num; i++)
    {
        printf("arr[%d] = %d\n", i, arr[i] );
    }
    
    return 0;
    
    
}
/*#include<stdio.h>

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

}*/