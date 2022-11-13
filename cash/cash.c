#include<stdio.h>
#include<cs50.h>
#include<math.h>

int main(void)
{
    float change = 0;
    do{
        change = get_float("change owed :");
    }
    while(change < 0);
    //25 10 5 1
    
    int cent = round(change*100);
    int coin = 0;
    
    coin += cent/25;
    cent = cent%25;
    coin += cent/10;
    cent = cent%10;
   
    coin += cent/10;
    cent = cent%10;
     coin += cent/5;
    cent = cent%5;
    coin += cent/1;
    cent = cent%1;
    
    printf("%i", coin);
    
}