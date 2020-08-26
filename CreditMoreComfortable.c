/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <math.h>
#define AmericanExpress 1// 34,37; 15
#define Visa 2// 4; 13,16
#define MasterCard 3// 51,52,53,54,55; 16


int validCard(long cnum, long input){
    int ans=0;
    int put=0;
    for(int i=0; i < input; i++){
        
        if(i%2==0){
            put=cnum%10;
            ans = put%10+put/10+ans;
        //    ans=(cnum%10)*2+ans;
            cnum=cnum/10;
        //    printf("%d ", ans);
        }
        else{
            put=(cnum%10)*2;
            ans = put%10+put/10+ans;
        //    ans=cnum%10+ans;
            cnum=cnum/10;
        //    printf("%d ", ans);
        }
    }
    if(ans%10==0){
        printf("Valid Card: ");
        return 1;
    }
    else{
        invalidCard();
        return 0;
    }
}

void invalidCard(){
    printf("Invalid card number\n");
}

int main()
{
    char cardname[20];
    long num = 0;
    long input = 0;
    long ms = (pow(10, 14));
    long aef = (pow(10, 13));
    long vt = (pow(10,12));
    long vs = (pow(10,15));
    //printf("%ld", mastersixteen);
    scanf("%ld", &num);
    input = log10(num) + 1;
   //printf("%ld", input);
   //printf("%ld", num/ms);
   if(input==15 && (num/aef==34 || num/aef==37)){
       if(validCard(num, input)){
       printf("AmericanExpress");
       }
   }
   else if((num/vs==4 || num/vt==4) && (input==16 || input==13)){
       if(validCard(num, input)){
       printf("Visa");
       }
   }
   else if(input==16 && (num/ms==51 || num/ms==52 || num/ms==53 || num/ms==54 || num/ms==55)){
       if(validCard(num, input)){
       printf("MasterCard");
       }
   }
   else{
       invalidCard();
   }
    return 0;
}
