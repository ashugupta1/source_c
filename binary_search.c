#include<stdio.h>

int binary_search(int arr[], int key, int start, int end)
{
    

    while (start <= end)
    {
        int mid = (start + end) / 2;
        

        if (arr[mid] == key)
        {
            return mid;
            
        }

        else if (arr[mid] < key)
        {
            start = mid + 1;
            
        }

        else
        {
            end = mid - 1;
            
        }   
    } 
    return -1; 

}

int main()
{
    int arr[] = {10,20,30,40,50,60};
    int size = sizeof(arr)/sizeof(arr[0]);
    int key , start ;

    printf("enter key = ");
    scanf("%d", &key);

    int result = binary_search(arr, key, 0, size - 1 );
    (result == -1) ? printf("element is not present in array \n")
    : printf("element is present at index %d\n", result);
    return 0;
}