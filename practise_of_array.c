//Arrays 
#include <stdio.h>

int main() {
    int i, n;

    printf("Enter how many numbers: ");
    scanf("%d", &n);

    int arr[n];
    int sum = 0;

    for(i = 0; i < n; i++) {
        printf("Enter number: ");
        scanf("%d", &arr[i]);
        sum = sum + arr[i];   // calculating sum
    }

    int min = arr[0];
    int max = arr[0];

    for(i = 1; i < n; i++) {
        if(arr[i] < min) {
            min = arr[i];
        }
        if(arr[i] > max) {
            max = arr[i];
        }
    }

    float average = (float)sum / n;

    printf("\nNumbers entered are:\n");
    for(i = 0; i < n; i++) {
        printf("%d\n", arr[i]);
    }

    printf("\nSum = %d\n", sum);
    printf("Average = %.2f\n", average);
    printf("Minimum = %d\n", min);
    printf("Maximum = %d\n", max);

    return 0;
}
