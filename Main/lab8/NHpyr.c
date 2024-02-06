#include <stdio.h>
int main(){
	int Nrow;
	printf("Enter the number of rows: ");
	scanf("%d",&Nrow);
	int nums=0;
	for(int i=1;i<=Nrow;i++){
		nums=0;
		for(int j=1;j<=i;j++){
			printf("%d ",(nums+j));
		}
		printf("\n");
	}
return 0;
}
