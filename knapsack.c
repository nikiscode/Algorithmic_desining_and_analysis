knapscak.c
  #include <stdio.h>

struct Item{
    int weight;
    int value;
    float ratio;
};

void sortItems(struct Item items[], int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if (items[i].ratio < items[j].ratio){
                struct Item temp = items[i];
                items[i] = items[j];
                items[j] = temp;
            }
        }
    }
}

int knapscakGreedy(int weights[], int values[], int n, int capacity){
    struct Item items[n];

    for (int i=0;i<n;i++){
        items[i].weight = weights[i];
        items[i].value = values[i];
        items[i].ratio = (float)values[i] / weights[i];
    }

    sortItems(items, n);

    int totalValue = 0;

    for(int i=0;i<n;i++){
        if(capacity >= items[i].weight){
            capacity -= items[i].weight;
            totalValue += items[i].value;
        }
        else{
            totalValue += items[i].ratio * capacity;
            break;
        }
    }

    return totalValue;
}

int main(){
    int weights[] = {10, 20, 30};
    int values[] = {60, 100, 120};
    int capacity = 50;
    int n = 3;

    int maxValue = knapscakGreedy(weights, values, n, capacity);

    printf("Maximum value = %d\n", maxValue);

    return 0;
}
