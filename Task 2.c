#include <stdio.h>
int main()
{
	int marks[6][4];
	int std_total[6]={0};
	int std_avg[6]={0};
	int sub_avg[4]={0};
	int i,j,k,l,m,n;
//	 taking input
	for(i=0;i<6;i++){
		for(j=0;j<4;j++){
			printf("Enter marks of student %d subject %d : \n",i+1,j+1);
			scanf("%d",&marks[i][j]);
		}
	}
	
	//performing operations
	for(i=0;i<6;i++){
		for(j=0;j<4;j++){
			std_total[i] += marks[i][j];
			sub_avg[j] += marks[i][j];
		}
		std_avg[i]=std_total[i]/4;
	}
	 
	int max,index=0;	
	for(k=0;k<4;k++){
		sub_avg[k]=sub_avg[k]/6;
	}
	
	max=sub_avg[0];
	for(l=0;l<4;l++){
		if(sub_avg[l]>max){
			max=sub_avg[l];
			index=l;
		}
	}
	
	//printing output
	printf("\nStudent\tTotal\tAverage\n");
	for(m=0;m<6;m++){
		printf("   %d\t %d\t   %d\n",m+1,std_total[m],std_avg[m]);
	}
	
	printf("\nSubject\tAverage\n");
	for(n=0;n<4;n++){
		printf("   %d\t  %d\n",n+1,sub_avg[n]);
	}
	printf("\nThe subject where class performed best : %d",index+1);
return 0;
}

