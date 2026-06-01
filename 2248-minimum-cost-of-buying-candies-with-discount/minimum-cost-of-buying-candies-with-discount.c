#include <stdlib.h>

int cmp(const void *a, const void *b) {
    return (*(int *)a) - (*(int *)b);
}

int minimumCost(int* cost, int costSize)
{
    qsort(cost, costSize, sizeof(int), cmp);

    int sum = 0;
    int count = 0;

    for (int i = costSize - 1; i >= 0; i--) {
        count++;

        if (count % 3 != 0) {
            sum += cost[i];
        }
    }

    return sum;
}