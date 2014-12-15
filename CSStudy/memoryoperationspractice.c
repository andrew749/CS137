#include<stdlib.h>
int main()
{

int *a=(int *)calloc(10,sizeof(int));
a[5]=2;
*(a+2)=1;
int i;
for(i=0;i<10;i++)
printf("%d\n",a[i] );
int *b=a+2;
printf("%d\n",*b );
}
