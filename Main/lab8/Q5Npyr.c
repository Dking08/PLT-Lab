#include <stdio.h>
int main(){
	int Nrow;
	printf("Enter the number of rows: ");
	scanf("%d",&Nrow);
	for(int i=1;i<=Nrow;i++){
		for(int space=Nrow;space>=i;space--){
			printf("  ");
		}
		for(int nums=1;nums<=i;nums++){
			printf("%d ",nums);
		}
		for(int nums=(i-1);nums>=1;nums--){
			printf("%d ",nums);
		}
		printf("\n");
	}
return 0;
}
