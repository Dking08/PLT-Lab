#include <stdio.h>
int main(){
	int Nrows;
	printf("Enter the number of rows: ");
	scanf("%d",&Nrows);
	for(int i=1;i<=Nrows;i++){
		for(int j=1;j<=Nrows;j++){
			printf("%d ",i);
		}
		printf("\n");
	}
return 0;
}
