#include <stdio.h>

int Max(int *n1, int *n2, int *n3){
int max = *n1;

	if(max<*n2){
		if(max<*n3){
			max = *n3;
	}else{
		max = *n2; }
	}
	else if(max<*n3){
		max = *n3;
	}

return max;
}
int main(){
	int n1,n2,n3;
	printf("Enter the three numbers: ");
	scanf("%d %d %d",&n1,&n2,&n3);
	printf("The max is: %d",Max(&n1,&n2,&n3));
return 0;
}
