#include<stdlib.h>
int main()
{
int a[]={1,2,3,4,5,6,7,8};
printf("%d\n",sizeof(a));

printf("%d\n",sizeof(a)/sizeof(int) );

int *b=(int *)malloc(sizeof(int )*10);
printf("%d\n",sizeof(b));

printf("%d\n",sizeof(b)/sizeof(int) );


}
