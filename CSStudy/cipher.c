#include<stdio.h>
char *cipher(char *original){
  int i=0;
  while(original[i]!='\0')
  {

    original[i]=original[i]+1;
    i++;


  }
  return original;

}
char *decipher(char *original){
  int i=0;
  while(original[i]!='\0')
  {

    original[i]=original[i]-1;
    i++;


  }
  return original;



}
int main(){
  char t[]="abc";
  printf("%s\n",cipher(t));
  printf("%s\n",decipher(t));


}
