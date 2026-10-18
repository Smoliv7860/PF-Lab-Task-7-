#include <stdio.h>
int main()
{
	int seats[5][8];
	int i,j;
	
	//taking input
	for(i=0;i<5;i++){
		for(j=0;j<8;j++){
			printf("Enter the booking status for row %d, seat %d (1 for booked and 0 for empty) : ",i+1,j+1);
			scanf("%d",&seats[i][j]);
			if(seats[i][j]!=0&&seats[i][j]!=1){
			printf("invalid input");
		    return 0;}
		}
	}
	
	//printing the seating map
	for(i=0;i<5;i++){
		for(j=0;j<8;j++){
			if(seats[i][j]==0){
				printf(".\t");
			}else if(seats[i][j]==1){
				printf("x\t");
			}else{
				printf("invalid input");
			}
		}
		printf("\n");
	}
	int tot_empty = 0, cnt_occupied = 0;
	for(i=0;i<5;i++){
		int empty = 0;
		for(j=0;j<8;j++){
			if(seats[i][j]==0){
				empty++;
			}else if(seats[i][j]==1){
				cnt_occupied ++;
			}
		}
		printf("\nFor Row %d: Empty Seats are %d",i+1,empty);
		tot_empty += empty;
	}
	printf("\nTotal Empty Seats: %d",tot_empty);
return 0;	
}
