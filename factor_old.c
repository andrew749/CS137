#include<stdlib.h>
void factor(int number){
    int div;    
    int first=1;
    div = 2;
    int divincrease=1;
    printf("%d = ",number );
    while(number!=1){
        if(number%div!=0){
            div +=divincrease;
            //skip over even numbers
            
            if(div>4)
                divincrease=2;
            
        }
        else {
            number /= div;
            if(first){
                printf("%d",div);
                first=0;
            }
            else
                printf("*%d",div);
            
        }
    }
    printf("\n");
    
}
