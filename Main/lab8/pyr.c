#include <stdio.h>
int main(){
	int Nrow;
	printf("Enter the number of rows: ");
	scanf("%d",&Nrow);
	for(int i=1;i<=Nrow;i++){
		for(int space=Nrow;space>=i;space--){
			printf(" ");
		}
		for(int stars=1;stars<=i;stars++){
			printf("* ");
		}
		printf("\n");
	}
return 0;
}
