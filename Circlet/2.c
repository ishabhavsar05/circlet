//11
//12 13
//14 15 16
//17 18 19 20

#include<stdio.h>
#include<conio.h>

main()
{
	int i,j,n=11;
	
	for(i=1; i<=4; i++)
	{
		for(j=1; j<=i; j++)
		{
			printf("%d ",n);
			n++;
		}
		printf("\n");
	}
    getch();
}


   
