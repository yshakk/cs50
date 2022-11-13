#include <stdio.h>
#include <cs50.h>

int main(void)
{
    
    int height = 0;
    do
    {
        height = get_int("Height:");
      
        
    }while((height <=0) || (height >=9));
    /*
    for(int k=0;k<height;k++)
{
    for(int i = 0; i <= k;i++ )
    {
        printf("#");
    }
    printf("\n");
}*/

for(int k=0;k<height;k++)
{
    for(int j=height;j>k+1;j--)
    {
        printf(" ");
    }
   for(int i = 0; i <= k;i++ )
    {
        printf("#");
    }
    printf("\n");
}
    
}