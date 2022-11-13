#include<stdio.h>
#include<cs50.h>

int main(void)
{
    long creditno=0;
    
    creditno = get_long("Number: ");
    long temp=0;
    temp=creditno;
    temp=temp/10;
    int firstnum=0;
    int firstnumsum=0;
    int secondlastnum=0;
    int secondlastnumsum=0;
    int legit=0;
    int counter1=0;
    while(temp !=0)
    {
        secondlastnum=temp%10;
        secondlastnum=secondlastnum*2;
        if(secondlastnum>9)
        {
            secondlastnumsum+=secondlastnum%10;
            secondlastnumsum+=secondlastnum/10;
        }
        else
        {
            secondlastnumsum+=secondlastnum;
        }
        
        temp=temp/100;
        
        counter1++;
    }
    //printf("%i \n",secondlastnumsum);
    temp=creditno;
    while(temp!=0)
    {
        firstnum=temp%10;
        temp=temp/100;
        firstnumsum+=firstnum;
        counter1++;
    }
    
    legit=secondlastnumsum+firstnumsum;
    
        for(int i=0;i<counter1-2;i++)
        {
            creditno=creditno/10;
            
        }
        
      // printf("%li credit\n",creditno);
    
    if(legit%10==0)
    {
        
        if(counter1==15 && (creditno==34 || creditno==37))
        {
            printf("AMEX\n");
        }
        else if(counter1==16 && (creditno==51 || creditno==52 || creditno==53 || creditno==54 || creditno==55))
        {
            printf("MASTERCARD\n");
        }
        else if( (creditno>=40 &&creditno<=49 )&& counter1>12)
        {
            printf("VISA\n");
        }
        else
        {
             printf("INVALID\n");
        }
    }
    if(legit%10!=0)
    {
        printf("INVALID\n");
    }
   // printf("%li \n",creditno);
}