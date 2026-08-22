#include <stdio.h>

int main()
{
    int a[100], n, i;
    int *p;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    p = a;

    printf("Squares of elements:\n");

    for(i = 0; i < n; i++)
    {
        printf("%d ", (*p) * (*p));
        p++;
    }

    return 0;
}