#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
char *a="hello";
char *b="hella";
char *c=(char *)malloc(sizeof(char)*10);
strcpy(c,a);
printf("%s",c);
c=(char *)realloc(c,sizeof(char)*20);
printf("%s\n",strcat(c,b) );
printf("%d\n",strcmp(a,b) );

printf("%d\n",strcmp(a,c) );

printf("%s\n",c );
printf("%d\n",strcmp(c,c) );
}
