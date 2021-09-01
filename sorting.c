#include<stdio.h>

int selection_sort(int arr[], int size)
{
    int tamp;

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - 1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                tamp   = arr[j];
                printf("tamp = %d\n", tamp);

                arr[j] = arr[j+1];
                printf("arr swap[%d] = %d\n",j, arr[j] );

                arr[j+1] = tamp;
                printf("arr[%d] = %d\n",j, arr[j]);
                
            }
            
        }
        
    }

    for (int k = 0; k < size; k++)
    {
        printf("sorted array is = %d\n",arr[k]);
    }
    
    

}

int main()
{
    int arr[] = {25,15,5,35,50,20,29};
    
    int size = sizeof(arr)/sizeof(arr[0]);

    selection_sort(arr, size);

    return 0;   

}