#include <stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
  int guess, random, no_guess_attemp = 0;
  srand(time(NULL));
  random=rand()%100+1;
  printf("Welcome to the world of Gussing Number\n");

  do
  {
    printf("\n Please enter your Guess number between(1 to 100) : ");
    scanf("%d", &guess);
    no_guess_attemp++;
    if (guess < random)
    {
      printf(" Guess larger Number \n");
    }
    else if (guess > random)
    {
      printf(" Guess smaller Number \n");
    }
    else
    {
      printf("Conguralations !!!you have successfully gussed the number in %d Attempt \n", no_guess_attemp);
    }

  } while (guess != random);
  printf("Bye Bye ! Thanks For Playing  \n");
  printf("Developed By : \"Munna Kumar\"");
}