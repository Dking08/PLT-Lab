#include <stdio.h>
int main(){

	int n;
	printf("Enter the length of array: ");
	scanf("%d",&n);
	int ar1[n],ar2[n-1];
	for(int i=0;i<n;i++){
		printf("Element %d: ",i+1);
		scanf("%d",&ar1[i]);
	}
	int Delpos;
	printf("Enter the position to delete: ");
	scanf("%d", &Delpos);
	
	int FDEL=0;
	
	for(int i=0;i<n;i++){
		if(Delpos==i){
			FDEL=1;
			continue;
		}
		ar2[i-FDEL] = ar1[i]; 
	}
	
	for(int i=0; i<n-1; i++){
		printf("Element %d: %d\n",i+1,ar2[i]);
	}


return 0;
}
