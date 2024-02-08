#include <stdio.h>
int main(){
	int Nrow;
	printf("Enter the number of rows: ");
	scanf("%d",&Nrow);
	for(int i=1;i<=Nrow;i++){
		if(i%2!=0){
			for(int nums=1;nums<=i;nums++){
			printf("%d ",nums);
		}
		}else{
			for(int nums=(i);nums>=1;nums--){
			printf("%d ",nums);
		}	
		}
		printf("\n");
	}
return 0;
}
