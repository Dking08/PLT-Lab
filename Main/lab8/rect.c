#include <stdio.h>
int main(){
	int Nrows;
	printf("Enter the number of rows: ");
	scanf("%d",&Nrows);
	for(int i=1;i<=Nrows;i++){
	if(i==1 || i==Nrows){
		for(int j=1;j<=Nrows;j++){
			printf("* ");
		}
	}
	else{
	
		printf("*");
		for(int j=1;j<=Nrows-2;j++){
		printf("  ");
		}
		printf(" *");
		
	}
		printf("\n");
	}
return 0;
}
