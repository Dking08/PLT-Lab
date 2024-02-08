#include <stdio.h>
int main(){
	int Nrow;
	char letter;
	printf("Enter the number of rows: ");
	scanf("%d",&Nrow);
	for(int i=1;i<=Nrow;i++){
	letter='A';
	letter=(letter+i-1);
		for(int j=1;j<=i;j++){
			printf("%c ",letter);
			letter--;
		}
		printf("\n");
	}
return 0;
}
