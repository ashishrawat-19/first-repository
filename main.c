/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <time.h>
#include<stdlib.h>
int getrandom(int n){
    srand(time(NULL));
    return rand() % n;
}
int greater(char P, char C){
    if(P == C){
        return -1;
    }else if(P == 'r' && C == 's'){
        return 1;
    }else if(P == 's' && C == 'r'){
        return 0;
    }else if(P == 'p' && C == 'r'){
        return 1;
    }else if(P == 'r' && C == 'p'){
        return 0;
    }else if(P == 's' && C == 'p'){
        return 1;
    }else if(P == 'p' && C == 's'){
        return 0;
    }
}
int main()
{
  char dict[] = {'r','s','p'};
  int temp, Cscore = 0, Pscore = 0;
  char P, C;
  printf("\tWelcome to the Rock Paper Scissors\n");
  printf("\t----------------------------------\n\n");
  for(int i = 0; i<3; i++){
      printf("Enter Your Choice : \n 1. Rock\t 2. Scissor\t 3. Paper");
      printf("\t----------------------------------\n\n");
      printf("Player Turn : ");
      scanf("%d",&temp);
      P = dict[temp - 1];
      printf("Player Choice is : %c", P);
      printf("\t----------------------------------\n\n");
      printf("Computer turn : ");
      temp = getrandom(3) + 1;
      C = dict[temp - 1];
      printf("Computer Choice is : %c", C);
      
      if(greater(C,P) == -1){
        Cscore++;
        Pscore++;
        printf("\t\tComputer Got It!\n\n");
        printf("\t\tPlayer Got It!\n\n");
      } else if(greater(C,P) == 1){
          Cscore++;
          printf("\t\tComputer Got It!\n\n");
      }else{
          Pscore++;
          printf("\t\tPlayer Got It!\n\n");
      }
      printf(" -------------\n");
        printf("| You: %d      |\n", Pscore);
        printf("| Computer: %d |\n", Cscore);
        printf(" -------------\n\n");

  }
  printf(" -----------------\n");
    printf("|   Final Score   |\n");
    printf(" -----------------\n");
    printf("|  You | Computer |\n");
    printf("|------|----------|\n");
    printf("|   %d  |    %d     |\n", Pscore,Cscore);
    printf(" -----------------\n\n");

    // compare score
    if (Pscore > Cscore)
    {
        printf("\n\t -------------------\n");
        printf("\t| You Win the match |\n");
        printf("\t -------------------\n");
    }
    else if (Pscore < Cscore)
    {
        printf("\n\t ------------------------\n");
        printf("\t| Computer Win the match |\n");
        printf("\t ------------------------\n");
    }
    else
    {
        printf("\n\t -------------\n");
        printf("\t| It's a draw |\n");
        printf("\t -------------\n");
    }


    return 0;
}
