#include <stdio.h>
int main()
{
	int rooms[4][6];
	int i,j;
	
	//taking input
	for(i=0;i<4;i++){
		for(j=0;j<6;j++){
			printf("Enter the status of room %d on floor %d (0 for vacant, 1 for occupied) : ",j+1,i+1);
			scanf("%d",&rooms[i][j]);
		}
	}
	//calculations
	int floor_vacant[4]={0};
	for(i=0;i<4;i++){
		for(j=0;j<6;j++){
			if(rooms[i][j]==0){
				floor_vacant[i]++;
			}
		}
	}
	int max_vac=floor_vacant[0];
	int max_index;
	for(i=0;i<4;i++){
		if(floor_vacant[i]>=max_vac){
			max_vac=floor_vacant[i];
			max_index=i+1;
		}
	}
	//printing
		printf("\nFloor\tVacancies\n");
	for(i=0;i<4;i++){
		printf("   %d\t   %d\n",i+1,floor_vacant[i]);
	}
	printf("\nFloor with most vacancies : %d\n",max_index);
	
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			if(rooms[i][j]==0&&rooms[i][j+1]==0&&rooms[i][j+2]==0){
				printf("Floor %d has 3 or more vacancies starting at room %d",i+1,j+1);
			break;}
		}
	}
return 0;
}
