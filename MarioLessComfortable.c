/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>

int main(){
    printf("How high do you want the pyramid (between 1-8) ");
    int ch = 0;
    int flag = 0;
    while (ch<1 || ch>8){
        
        scanf("%d",&ch);
        if(ch<1 || ch>8){
        printf("%d is a bad number try again", ch);
        }
    }
    printf("good, %d\n", ch);
    for(int i = 0; i<ch; i++){
        for(int j = 0; j<ch; j++){
            if(j+i+1>=ch){
                printf("#");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
