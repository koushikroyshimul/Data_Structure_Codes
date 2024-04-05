#include <stdio.h>
int main()
{
    int a[10],search,i,N;
    printf("Enter number of elements in array\n");
    scanf("%d",&N);
    printf("Enter %d integer(s)\n", N);
    for (i=0; i<N; i++)
        scanf("%d", &a[i]);
    printf("Enter a number to search\n");
    scanf("%d", &search);
    for (i=0; i<N; i++)
    {
        if (a[i]==search)
        {
            printf("%d is present at location %d\n", search, i+1);
            break;
        }
    }
    if (i==N)
        printf("%d isn't present in the array\n", search);
    return 0;
}

