//Random importion of the numbers
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void Exch(int *p, int *q){
    int temp = *p;
    *p = *q;
    *q = temp;
}
void Quicksort(int a[], int low, int high){
    int i, j, key;
 if(low >= high)
        return;
 key = low;
    i = low + 1;
    j = high;

  while(i <= j){
        while(i <= high && a[i] <= a[key])
            i++;
     while(a[j] > a[key])
            j--;
         if(i < j)
            Exch(&a[i], &a[j]);
    }
    Exch(&a[key], &a[j]);
    Quicksort(a, low, j - 1);
    Quicksort(a, j + 1, high);
}
int main(){
    int a[10000], n, i;
    clock_t start, end;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    if(n <= 20){
        printf("Enter %d elements:\n", n);
        for(i = 0; i < n; i++)
            scanf("%d", &a[i]);
    }
    else{
        srand(time(0));
        for(i = 0; i < n; i++)
            a[i] = rand() % 10000;

        printf("\n%d random numbers generated.\n", n);
    }
    start = clock();
    Quicksort(a, 0, n - 1);
    end = clock();
    printf("\nSorted elements:\n");
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);
    double time_taken = (double)(end - start) / CLOCKS_PER_SEC;
    printf("\n\nExecution time: %f seconds\n", time_taken);
    return 0;
}
