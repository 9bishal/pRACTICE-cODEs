#include <stdio.h>
#include <stdlib.h>

int *ht, n, m, count = 0;

void insert(int key)
{
    int in = key % m;
    while (ht[in] != -1)
        in = (in + 1) % m;
    ht[in] = key;
    count++;
}

void display()
{
    if (count == 0)
    {
        printf("\nHash Table is empty");
        return;
    }
    printf("\nHash Table contents are:\n");
    for (int i = 0; i < m; i++)
        printf("\nT[%d] --> %d", i, ht[i]);
}

int main()
{
    printf("\nEnter the number of employee records (N): ");
    scanf("%d", &n);
    printf("\nEnter the two-digit memory locations (m): ");
    scanf("%d", &m);

    ht = (int *)malloc(m * sizeof(int));
    for (int i = 0; i < m; i++)
        ht[i] = -1;

    printf("\nEnter %d four-digit keys:\n", n);
    for (int i = 0; i < n; i++)
    {
        int key;
        scanf("%d", &key);
        if (count == m)
        {
            printf("\n~~~Hash table is full. Cannot insert key %d~~~", key);
            break;
        }
        insert(key);
    }
    display();
    free(ht);
    return 0;
}
