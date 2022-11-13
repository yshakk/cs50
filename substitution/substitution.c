#include<cs50.h>
#include<stdio.h>
#include<string.h>
#include<ctype.h>


void keycheck(void);

string plaintext;
string key;
char ciphertext[50];
int pos=0;
int count=0;
int j=0;
int main(int argc, string argv[])

{
 
if(argc==1)
 {
  printf("Usage: ./substitution key");
  return 1;
 }
 if(argc>2)
 {
  printf("Usage: ./substitution key");
  return 1;
 }

    //printf("key:");
    if(argc==2)
    {
         key=argv[1];
    for(int i=0;argv[1][i] !='\0';i++)
    {
    if(isalpha(argv[1][i])==0)
    {
     return 1;
    }
    for(int k=0;k<strlen(argv[1]);k++)
    {
     if(argv[1][i]==argv[1][k])
     {
     count++;
     if(count==2)
     {
      
      return 1;
     }
     
     }
    }
    count=0;
    //printf("%c",argv[1][i]);
    }
    if(strlen(key)!=26)
    {
     printf("Key must contain 26 characters.");
     return 1;
     
    }
    if(strlen(key)==26)
    {
     plaintext = get_string("plaintext:");
  
   printf("ciphertext: ");
   
   
   for(int i=0;plaintext[i]!='\0';i++)
   {
       if(isalpha(plaintext[i])!=0)
       {
   if(isupper(plaintext[i])!=0)
   {
  pos = ((plaintext[i]-65)%26);
  ciphertext[i]=toupper(key[pos]);
  printf("%c",ciphertext[i]);
   }
   
   if(islower(plaintext[i])!=0)
   {
  pos = ((plaintext[i]-97)%26);
  ciphertext[i]=tolower(key[pos]);
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
   
   
    
  
  
   }
}


