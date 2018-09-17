#include "project.h"
#include "stdio.h"

int main(){ 
	printf("Welcome to K&N! \n");

	char reply = 'y';
	int x_wins = 0, o_wins = 0, ties = 0;

	while (reply == 'y'){
		clrbrd();
		char winner = get_winner();
		printf("\n The final board: \n");
		
		print_board();
  
		switch(winner){
  			case'X':
  				x_wins++;
  				break;
  			case '0':
				o_wins++;
				break;
			case 'D':
				ties++;
				break;		
		}
		printf("\n \n \t*Winner Statistics*\n Player X: %d , PLayer 0: %d  and Ties: %d \n \n", x_wins,o_wins,ties);
		
		printf(" \n Would you like to play again& (y/n): ");
		
		scanf("%c", &reply);
		
		while(reply != 'y' && reply != 'n'){
			printf("Please enter a valid reply (y/n): ");
			
			scanf("%c", &reply);
			
		}        
	}
   return 0;
}
