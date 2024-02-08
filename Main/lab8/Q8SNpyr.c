#include <stdio.h>
int main(){
	int Nrow;
	printf("Enter the number of rows: ");
	scanf("%d",&Nrow);
	for(int i=1;i<=Nrow;i++){
		for(int j=1;j<=i;j++){
			printf("%d ",(i));
		}
		printf("\n");
	}
return 0;
}
