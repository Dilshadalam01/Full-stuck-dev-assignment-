#include<stdio.h>
int main()
{
	int i,j,k,l,m;
	printf("\nThis is the first pattern in the assignment.\n\n");
	for(i=1;i<=5;i++)
	{
	 	for(j=5;j>i;j--){
	 		printf(" ");
	 	}
		for(k=1;k<=i;k++){
			printf("* ");
		} 
	printf("\n");		
	}
	
	printf(" \nThis the second pattern \n\n");
	
	for (l=1;l<=4;l++){
		for(m=1;m<=6;m++){
			printf("*");
		}
		printf("\n");
	}
}
