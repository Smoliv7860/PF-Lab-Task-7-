#include <stdio.h>
int main()
{
	char board[3][3];
	int i = 0,j = 0;
	//taking input
	for(i=0;i<3;i++){
		printf("Enter (%d) row of board using space (o x o): ",i+1);
		for( j=0;j<3;j++){
			scanf(" %c", &board[i][j]);			
		}
	}
	//printing the finished tic tac toe
	for(i=0;i<3;i++){
		printf("\t");
		for( j=0;j<3;j++){
			printf("%c | ",board[i][j]);		
		}
		printf("\n");
	}
	
	//declaring the winner
	char winner='-';
	for(i=0;i<3;i++){
		if(board[i][0]==board[i][1] && board[i][1]==board[i][2]){
			winner=board[i][0];
		break;}
		if(board[0][i]==board[1][i] && board[1][i]==board[2][i]){
			winner = board[0][i];
		break;}
	}
	if((board[0][0]==board[1][1]&&board[1][1]==board[2][2]) || (board[0][2]==board[1][1]&&board[1][1]==board[2][0])){
		winner=board[1][1];
	}
	if(winner=='-'){
		printf("\nDRAW, No winner");
	return 0;}
	printf("\nWinner : %c",winner);
return 0;
}
