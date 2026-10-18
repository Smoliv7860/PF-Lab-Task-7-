#include <stdio.h>
int main()
{
	int sales[3][5]={{57,13,14,90,22},{15,16,17,50,19},{9,8,30,20,0}};
	int i,j;
	//taking input
	for(i=0;i<3;i++){
		for(j=0;j<5;j++){
			printf("Enter the sales of product %d in branch %d : ",j+1,i+1);
			scanf("%d",&sales[i][j]);
	 	}
    }
    //calculations
    int total_branch[3]={0};
    int total_prod[5]={0};
	for(i=0;i<3;i++){
		for(j=0;j<5;j++){
			total_branch[i]+=sales[i][j];
			total_prod[j]+=sales[i][j];
	 	}
    }
	int max_sales=total_branch[0];
	int max_index;
	for(i=0;i<3;i++){
		if(total_branch[i]>=max_sales){
			max_sales=total_branch[i];
	        max_index=i+1;
	    }
	}
	int min_sales=total_prod[0];
	int min_index;
	for(i=0;i<5;i++){
		if(total_prod[i]<=min_sales){
			min_sales=total_prod[i];
			min_index=i+1;
		}
	}
	
	//printing the output
	printf("\nBranch\tTotal Sales\n");
	for(i=0;i<3;i++){
		printf("   %d\t   %d\n",i+1,total_branch[i]);
	}
	printf("\nProduct\tTotal Sales\n");
	for(i=0;i<5;i++){
		printf("   %d\t   %d\n",i+1,total_prod[i]);
	}
	printf("\nThe best selling branch : %d",max_index);
	printf("\nThe product with the lowest sales : %d",min_index);    
return 0;
}
