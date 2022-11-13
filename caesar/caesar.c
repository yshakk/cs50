#include<cs50.h>
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

void encryption(string plaintext);


 int key=0;
int main(int argc, string argv[])
{
   
    int check=0;
    string plaintext;
   // d=atoi(argv[1]);
  //  d=isalpha(argv[1][0]);





if(argc>2 || argc==1)
{
    printf("Usage: ./caesar key");
    return 1;
    
}

if(argc==2)
{
    for(int i=0;argv[1][i]!='\0';i++)
    {
        if(isalpha(argv[1][i])!=0)
        {
            check += 1;
        }
        else
        {
            check += 0;
        }
    }
    if(check==1)
    {
         printf("Usage: ./caesar key");
         return 1;
    }
    
    if(check==0)
    {
        //printf("corectformat");
         key=atoi(argv[1]);
       //  printf("key:%d",key);
       plaintext=get_string("plaintext: ");
       
       encryption(plaintext);
       
         
    }
    
}
key=0;

//return 1;

}



void encryption(string plaintext)
{
    char ciphertext[20]; 
    int k=0;
    printf("ciphertext: ");
    for(int i=0;plaintext[i]!='\0';i++)
    {
        if(isalpha(plaintext[i])!=0)
        {
               if(isupper(plaintext[i])!=0)
               {
                  k=key%26;
                  ciphertext[i]=(char)(((k+(plaintext[i]-65))%26)+65);
                  printf("%c",ciphertext[i]);
               }//encrypt
               
               if(islower(plaintext[i])!=0)
               {
                   k=key%26;
                  ciphertext[i]=(char)(((k+(plaintext[i]-97))%26)+97); 
                  printf("%c",ciphertext[i]);
                   
                   
               }
        }
        
        else
        {
            ciphertext[i]=plaintext[i];//leaveas it is
            printf("%c",ciphertext[i]);
        }
    }
    
   printf("\n");
}