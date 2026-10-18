
#include <stdio.h>
int main()
{
    char titles[5][50],letter;
    int copies[5];
    int i,j,vowels,max=0,found=0;
    for(i=0;i<5;i++)
    {
        printf("Enter title of book %d: ",i+1);
        scanf(" %49[^\n]",titles[i]);
        printf("Enter number of copies: ");
        scanf("%d",&copies[i]);
    }
    printf("\n---------- BOOK CATALOG ----------\n");
    printf("Book Title\t\tCopies\n");
    for(i=0;i<5;i++)
    {
        printf("%s\t\t%d\n",titles[i],copies[i]);
    }
    printf("\n---------- VOWEL COUNT ----------\n");
    for(i=0;i<5;i++)
    {
        vowels=0;
        for(j=0;titles[i][j]!='\0';j++)
        {
            if(titles[i][j]=='a' || titles[i][j]=='e' ||
               titles[i][j]=='i' || titles[i][j]=='o' ||
               titles[i][j]=='u' || titles[i][j]=='A' ||
               titles[i][j]=='E' || titles[i][j]=='I' ||
               titles[i][j]=='O' || titles[i][j]=='U')
            {
                vowels++;
            }
        }
        printf("%s has %d vowels\n",titles[i],vowels);
    }
    printf("\nEnter a letter to search for titles: ");
    scanf(" %c",&letter);
    printf("Books starting with %c:\n",letter);
    for(i=0;i<5;i++)
    {
        if(titles[i][0]==letter ||
           titles[i][0]==letter-32 ||
           titles[i][0]==letter+32)
        {
            printf("%s\n",titles[i]);
            found=1;
        }
    }
    if(found==0)
    {
        printf("No matching titles found\n");
    }
    for(i=1;i<5;i++)
    {
        if(copies[i]>copies[max])
        {
            max=i;
        }
    }
    printf("\nBook with the most copies: %s\n",titles[max]);
    printf("Number of copies: %d\n",copies[max]);
    return 0;
}
