#include <stdio.h>

struct Item {
    int weight;
    int value;
    float ratio;
};

// Sort by ratio (descending)
void sortItems(struct Item items[], int n) {
    struct Item temp;
    for(int i = 0; i < n - 1; i++) {
        for(int j = i + 1; j < n; j++) {
            if(items[i].ratio < items[j].ratio) {
                temp = items[i];
                items[i] = items[j];
                items[j] = temp;
            }
        }
    }
}

int main() {
    int n, capacity;

    printf("Enter number of items: ");
    scanf("%d", &n);

    struct Item items[n];

    // Input weights
    printf("\nEnter weights:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &items[i].weight);
    }

    // Input values
    printf("\nEnter values:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &items[i].value);
    }

    // Calculate ratios
    for(int i = 0; i < n; i++) {
        items[i].ratio = (float)items[i].value / items[i].weight;
    }

    // Input capacity
    printf("\nEnter capacity:\n");
    scanf("%d", &capacity);

    // Sort items
    sortItems(items, n);

    int totalValue = 0;

    printf("\nSelected items:\n");

    for(int i = 0; i < n; i++) {
        if(items[i].weight <= capacity) {
            printf("%d %d\n", items[i].weight, items[i].value);
            capacity -= items[i].weight;
            totalValue += items[i].value;
        }
    }

    printf("\nMaximum value: %d\n", totalValue);

    return 0;
}
