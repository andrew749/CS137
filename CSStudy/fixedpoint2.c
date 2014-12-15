#include<stdio.h>
int main()
{

double sum=10;
int i=0;
while(i++<100000)
{
sum=10/(sum-5);

}
printf("%g",sum);
}
