#include <stdio.h>
int main(){
	int Nrow;
	printf("Enter the number of rows: ");
	scanf("%d",&Nrow);
	for(int i=1;i<=Nrow;i++){
		for(int space=1;space<=i;space++){
			printf(" ");
		}
		for(int stars=Nrow;stars>=i;stars--){
			printf("* ");
		}
		printf("\n");
	}
return 0;
}
