#include<stdio.h>
#include<cs50.h>

int main(void)
{
    //enter starting population size
    int n = 0;
    do
    {
        n = get_int("start size:");
        
    }while(n < 9);
    //enter end population size
    
    
    int k = 0;
    
    do
    {
        k = get_int("end size:");
        
    }
    while (k < n);
    
   //calculation logic
    
    int total = 0;
    int year = 0;
    while(k > n)
    {
        total = (n + (n / 3) - (n / 4));
        
        year++;
        n = total;
    }
    printf("Years: %i", year);
}