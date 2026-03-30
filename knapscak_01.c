#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int max(int a, int b) {
    return (a > b) ? a : b;
}

int knapSack(int capacity, int weight[], int value[], int n) {
    int **dp = (int **)malloc((n + 1) * sizeof(int *));
    for (int i = 0; i <= n; i++) {
        dp[i] = (int *)malloc((capacity + 1) * sizeof(int));
    }

    for (int i = 0; i <= n; i++) {
        for (int w = 0; w <= capacity; w++) {
            if (i == 0 || w == 0)
                dp[i][w] = 0;
            else if (weight[i - 1] <= w)
                dp[i][w] = max(
                    value[i - 1] + dp[i - 1][w - weight[i - 1]],
                    dp[i - 1][w]
                );
            else
                dp[i][w] = dp[i - 1][w];
        }
    }

    printf("\nDP Table:\n");
    printf("     ");
    for (int w = 0; w <= capacity; w++) {
        printf("%4d", w);
    }
    printf("\n");

    for (int i = 0; i <= n; i++) {
        printf("i=%d  ", i);
        for (int w = 0; w <= capacity; w++) {
            printf("%4d", dp[i][w]);
        }
        printf("\n");
    }

    printf("\nSelected items:\n");
    int w = capacity;
    for (int i = n; i > 0 && w > 0; i--) {
        if (dp[i][w] != dp[i - 1][w]) {
            printf("Item %d (weight=%d, value=%d)\n",
                   i, weight[i - 1], value[i - 1]);
            w -= weight[i - 1];
        }
    }

    int result = dp[n][capacity];

    for (int i = 0; i <= n; i++) {
        free(dp[i]);
    }
    free(dp);

    return result;
}

int main() {
    int n, capacity;

    printf("Enter number of items: ");
    scanf("%d", &n);

    int *weight = (int *)malloc(n * sizeof(int));
    int *value  = (int *)malloc(n * sizeof(int));

    getchar();


    printf("Enter %d weights:\n", n);
    char line[1000];
    fgets(line, sizeof(line), stdin);

    char *token = strtok(line, ", ");
    for (int i = 0; i < n && token != NULL; i++) {
        weight[i] = atoi(token);
        token = strtok(NULL, ", ");
    }


    printf("Enter %d values/profits:\n", n);
    fgets(line, sizeof(line), stdin);

    token = strtok(line, ", ");
    for (int i = 0; i < n && token != NULL; i++) {
        value[i] = atoi(token);
        token = strtok(NULL, ", ");
    }


    printf("Enter knapsack capacity: ");
    scanf("%d", &capacity);

    int maxValue = knapSack(capacity, weight, value, n);

    printf("\nMaximum value = %d\n", maxValue);

    free(weight);
    free(value);

    return 0;
}
