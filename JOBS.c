#include <stdio.h>

struct Job {
    int id, deadline, profit;
};

int main() {
    int n;

    printf("Enter number of jobs: ");
    scanf("%d", &n);

    struct Job jobs[20], temp;

    printf("Enter Job details (ID Deadline Profit):\n");
    for (int i = 0; i < n; i++) {
        scanf("%d %d %d", &jobs[i].id, &jobs[i].deadline, &jobs[i].profit);
    }

    // Sort jobs by profit (descending) - simple bubble sort
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (jobs[j].profit < jobs[j + 1].profit) {
                temp = jobs[j];
                jobs[j] = jobs[j + 1];
                jobs[j + 1] = temp;
            }
        }
    }

    int slot[20] = {0}; // 0 means free slot
    int totalProfit = 0;

    printf("\nSelected Jobs: ");

    // Job sequencing
    for (int i = 0; i < n; i++) {
        for (int j = jobs[i].deadline - 1; j >= 0; j--) {
            if (slot[j] == 0) {
                slot[j] = jobs[i].id;
                totalProfit += jobs[i].profit;
                printf("J%d ", jobs[i].id);
                break;
            }
        }
    }

    printf("\nTotal Profit: %d\n", totalProfit);

    return 0;
}
