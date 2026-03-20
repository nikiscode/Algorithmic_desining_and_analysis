
//Heap sort Algorithm 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// Heapify function
void heapify(int arr[], int n, int i)
{
    int largest = i;
    int left = 2*i + 1;
    int right = 2*i + 2;
    if(left < n && arr[left] > arr[largest])
        largest = left;
    if(right < n && arr[right] > arr[largest])
        largest = right;
    if(largest != i)
    {
        int temp = arr[i];
        arr[i] = arr[largest];
        arr[largest] = temp;
        heapify(arr, n, largest);
    }
}

// Heap Sort function
void heapSort(int arr[], int n)
{
    for(int i = n/2 - 1; i >= 0; i--)
        heapify(arr, n, i);
    for(int i = n-1; i >= 0; i--)
    {
        int temp = arr[0];
        arr[0] = arr[i];
        arr[i] = temp;
        heapify(arr, i, 0);
    }
}

int main()
{
    int n;
    clock_t start, end;
    double cpu_time;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    int arr[n];
    // Random number generation
    srand(time(NULL));
    for(int i=0;i<n;i++)
        arr[i] = rand()%1000;
    printf("\nGenerated Numbers:\n");
    for(int i=0;i<n;i++)
        printf("%d ",arr[i]);
    // Start time
    start = clock();
    heapSort(arr,n);
    // End time
    end = clock();
    printf("\n\nSorted Numbers:\n");
    for(int i=0;i<n;i++)
    printf("%d ",arr[i]);
    cpu_time = ((double)(end-start))/CLOCKS_PER_SEC;
    printf("\n\nExecution Time: %f seconds\n",cpu_time);
    return 0;
}
