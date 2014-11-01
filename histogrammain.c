#include <stdio.h>
#include <stdlib.h>

int *histogram (const int *a, int n, int *m);

int main (void)
{
    int a[] = {1, 2, 3, 3, 3, 2, 1, 4, 5, 6, 0, -100};
    int b[]={0,1,2,3,4,5,6,7,8,9};

    int *h, m, i,*b2;

    h = histogram (a, sizeof(a)/sizeof(a[0]), &m);
    if (h)
    {
        for (i = 0; i < m; i++)
            printf ("%d\n", h[i]);
        free (h);
    }
printf("\n\n\n\n\n\n");

h = histogram (b, sizeof(b)/sizeof(b[0]), &m);
if (h)
{
    for (i = 0; i < m; i++)
        printf ("%d\n", h[i]);
    free (h);
}

    return 0;
}
