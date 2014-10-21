#include<math.h>
#include<stdio.h>
int main(){
int number=111;
int digits=(int)log10(number)+1;
int n=0;
printf("%d digits\n",digits);
int palindrome=1;
for(int i=digits;i>0;i--){
if(!(number/pow(10,i)==number/pow(10,n))){
  palindrome=0;
  printf("num1:%d, num2:%d",number/pow(10,i),number/pow(10,n));
  break;
  }
n++;
}
if(palindrome)
  printf("Number is a palindrome");
else
  printf("Number is not a palindrome");
return 0;
}
