#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int number, guess, nguesses=1;
	srand(time(0));
	number=rand()%100 + 1;
	//printf("The number is %d\n",number);
	do{
	    printf("Guess the number between 1 to 100\n"); 
		scanf("%d",&guess);
		if(guess>number)
		{
			printf("Lower number plese\n");
		}
		else if(guess<number)
		{
			printf("Higher number plese\n");
		}
		else
		{
			printf("You gussed it in %d attempts\n",nguesses);
		}
		nguesses++;
	}while(guess!=number);
	return 0;
}
