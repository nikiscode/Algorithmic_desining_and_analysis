//Practise code
#include <stdio.h>
/* Function to swap two numbers */
void Exch(int *p, int *q) {
    int temp = *p;
    *p = *q;
    *q = temp;
}
/* Quick Sort Function */
void quicksort(int a[], int low, int high) {
    int i, j, pivot;

    if (low >= high)
        return;

    pivot = a[low];      // Choose first element as pivot
    i = low + 1;
    j = high;

    while (i <= j) {

        while (i <= high && a[i] <= pivot)
            i++;

        while (a[j] > pivot)
            j--;

        if (i < j)
            Exch(&a[i], &a[j]);
    }

    // Place pivot in correct position
    Exch(&a[low], &a[j]);

    // Recursive calls
    quicksort(a, low, j - 1);
    quicksort(a, j + 1, high);
}

int main() {
    int n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    quicksort(a, 0, n - 1);

    printf("\nSorted array:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
