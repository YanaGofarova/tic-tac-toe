#include <stdio.h>
#include "project.h"

char board[9] = {' '};

void clrscr(){
	for (int i = 0; i < 40; i++){ 
		printf("\n");
	}
}

void clrbrd(){
	for (int i = 0; i < 9; i++){
		board[i] = '-';
	}
}

void print_board(){
	printf("\n");
	printf("-%c-|-%c-|-%c- \n", board[6], board[7], board[8]);
	printf("-%c-|-%c-|-%c- \n", board[3], board[4], board[5]);
	printf("-%c-|-%c-|-%c- \n", board[0], board[1], board[2]);

}

int get_move(){
	printf("Move options : \n");
	printf("-7-|-8-|-9- \n");
	printf("-4-|-5-|-6- \n");
	printf("-1-|-2-|-3- \n");

	printf("\n \n");
	
	print_board();
	printf("\n Your move: ");
	
	int move;
	scanf("%d", &move);

	while(move > 9 || move < 1 || board[move - 1] != '-'){
		printf(" \n Please enter a legal move (1-9): ");
	
		scanf("%d", &move);
		
	}
	return move;
} 

int wonQ(char player, int a){
    if  (a == 1) {
		board[2] = 'X';
		board[4] = 'X';
		board[6] = 'X';
	}
    int wins[][3]={{0, 1, 2}, {3, 4, 5}, {6, 7, 8}, {0, 3, 6}, {1, 4, 7}, {2, 5, 8}, {0, 4, 8},{2, 4, 6}};	
	for (int i = 0; i < 8; i++){
		int count = 0;
		for (int j = 0; j < 3; j++){
		  if(board[wins[i][j]] == player) 
		  	count++;
		}
		if (count == 3){
			return 1;
		}
	}   
	return 0;             
}

char get_winner(){
	int turn = 1;
  	while(!wonQ('X', 0) && !wonQ('0',0)){
    	clrscr();
    	int move = get_move();
		clrscr();
		if(turn % 2 == 1){
			board[move - 1] = 'X';
			if (wonQ('X',0)){
				printf("\n Congratulations player X! You win! \n");
	   		
	   			return 'X';
			}
		} else {
    		board[move - 1] = '0';
    		if (wonQ('0',0)){
				printf(" \n Congratulations player 0! You win! \n");
	   			
	   			return '0';
  			}
		}
		turn++;
		if (turn == 10){
			printf("\n it's a draw!");
  		
  			return 'D';
		}
	}
	return 0;
}
