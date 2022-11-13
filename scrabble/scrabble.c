#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Points assigned to each letter of the alphabet
int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int compute_score(string word);

int main(void)
{
    // Get input words from both players
    string word1 = get_string("Player 1: ");
    string word2 = get_string("Player 2: ");

    // Score both words
    int score1 = compute_score(word1);
    int score2 = compute_score(word2);
   // printf("score1:%d\n",score1);
 //printf("score2:%d\n",score2);
 
    // TODO: Print the winner
    
    
    if(score1>score2)
 {
     printf("Player 1 wins!");
     
 }
 
 if(score1<score2)
 {
     printf("Player 2 wins!");
     
 }
 else
 {
     printf("Tie!");
 }
}

int compute_score(string word)
{
    // TODO: Compute and return score for string
    //printf("entered");
    int i=0;
    int index=0;
    int score=0;
    for( i=0;word[i]!='\0';i++)
    {
        if(word[i]>=97 && word[i]<=122 )
        {
        index=(int)word[i]%97;
        score +=POINTS[index];
        }
        if(word[i]>=65 && word[i]<=90 )
        {
        index=(int)word[i]%65;
        score +=POINTS[index];
        }
        
    }
   // printf("%d\n",index);
    
    return score;
}