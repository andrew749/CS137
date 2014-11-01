#include <stdio.h>
#include <stdlib.h>

int *histogram (const int *a, int n, int *m);

int main (void)
{
    int a[] = {1, 2, 3, 3, 3, 2, 1, 4, 5, 6, 0, -100};
    int b[]={0,1,2,3,4,5,6,7,8,9};
    int c[]={99,100,57,88,87,13,44,45,7,62,301,0};
    int d[]={1,2,-3,5,-10,4,3,-6,-8,-10};
    int e[]={8,8,8,8,8};
    int f[]={};
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
printf("\n\n\n\n\n\n");

h = histogram (c, sizeof(c)/sizeof(c[0]), &m);
if (h)
{
    for (i = 0; i < m; i++)
        printf ("%d\n", h[i]);
    free (h);
}
printf("\n\n\n\n\n\n");

h = histogram (d, sizeof(d)/sizeof(d[0]), &m);
if (h)
{
    for (i = 0; i < m; i++)
        printf ("%d\n", h[i]);
    free (h);
}
h = histogram (e, sizeof(e)/sizeof(e[0]), &m);
if (h)
{
    for (i = 0; i < m; i++)
        printf ("%d\n", h[i]);
    free (h);
}
printf("null");
h = histogram (f, sizeof(f)/sizeof(f[0]), &m);
if (h)
{
    for (i = 0; i < m; i++)
        printf ("%d\n", h[i]);
    free (h);
}

    return 0;
}
