
#include <stdio.h>
int main()
{
    int stock[3][4][5];
    int i,j,k,build_total,shelf_Total;
    int high=-1,bestB=0,bestS=0;
    for(i=0;i<3;i++)
    {
        printf("Building %d\n",i+1);
        for(j=0;j<4;j++)
        {
            printf("Shelf %d:\n",j+1);
            for(k=0;k<5;k++)
            {
                printf("Enter items in slot %d: ",k+1);
                scanf("%d",&stock[i][j][k]);
            }
        }
    }
    for(i=0;i<3;i++)
    {
        build_total=0;
        for(j=0;j<4;j++)
        {
            shelf_Total=0;
            for(k=0;k<5;k++)
            {
                shelf_Total+=stock[i][j][k];
                if(stock[i][j][k]<5)
                {
                    printf("Needs restock: Building %d, Shelf %d, Slot %d\n",
                           i+1,j+1,k+1);
                }
            }
            build_total+=shelf_Total;
            if(shelf_Total>high)
            {
                high=shelf_Total;
                bestB=i;
                bestS=j;
            }
        }
        printf("Total stock of Building %d = %d\n",i+1,build_total);
    }
    printf("Fullest shelf is Shelf %d of Building %d\n",
           bestS+1,bestB+1);
    printf("Items in fullest shelf = %d\n",high);
    return 0;
}
