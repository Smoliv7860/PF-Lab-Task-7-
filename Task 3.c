#include <stdio.h>
int main()
{
	int temp[7][4];
	int i,j;
	//taking input
	for(i=0;i<7;i++){
			printf("Enter the temperature of morning, noon, evening and night respectively for day %d : \n",i+1);		
		for(j=0;j<4;j++){
			scanf("%d",&temp[i][j]);
		}
	}
	int hottest=0;
	int coldest=temp[0][0];
	int hday,htime,cday,ctime;
	for(i=0;i<7;i++){		
		for(j=0;j<4;j++){
			if(temp[i][j]>=hottest){
				hottest=temp[i][j];
				hday=i+1;
				htime=j;
			}
			 if(temp[i][j]<=coldest){
				coldest=temp[i][j];
				cday=i+1;
				ctime=j;
			}
		}
	}
	
	int noon_avg=0;
	for(i=0;i<7;i++){
		noon_avg+=temp[i][1];
	}
	noon_avg/=7;
	
	int days[7]={0};
	for(i=0;i<7;i++){
		if(temp[i][1]>noon_avg){
			days[i]=i+1;
		}
	}
	
	printf("\nHottest\tDay\tTime\n");
	if(htime==0){
		printf("   %d\t%d\tMorning",hottest,hday);
	}else if(htime==1){
		printf("   %d\t%d\tNoon",hottest,hday);
	}else if(htime==2){
		printf("   %d\t%d\tEvening",hottest,hday);
	}else if(htime==3){
		printf("   %d\t%d\tNight",hottest,hday);
	}
	
	printf("\nColdest\tDay\tTime\n");
	if(ctime==0){
		printf("   %d\t%d\tMorning",coldest,cday);
	}else if(ctime==1){
		printf("   %d\t%d\tNoon",coldest,cday);
	}else if(ctime==2){
		printf("   %d\t%d\tEvening",coldest,cday);
	}else if(ctime==3){
		printf("   %d\t%d\tNight",coldest,cday);
	}
	
	printf("\nDays where the temperature is above the weekly noon average : ");
	for(i=0;i<7;i++){
		if(days[i]!=0){
		printf("%d,",days[i]);
	    }
	}

return 0;
}
