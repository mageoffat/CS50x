/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <math.h>
int main()
{
    printf("How much is owed?\n");
    int coins =0;
    float f = 0;
    float change = 0;
    scanf("%f", &change);
    
    f = change;
    f=f*100;
    while(f>=25){

        f=f-25;
        coins=coins+1;

    }
    while(f>=10){

        f=f-10;
        coins=coins+1;

    }
    while(f>=5){

        f=f-5;
        coins=coins+1;

    }
    while(f>=1){

        f=f-1;
        coins=coins+1;

    }
    printf("%d\n", coins);
    

    return 0;
}
