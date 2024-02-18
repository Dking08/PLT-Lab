#include <stdio.h>
int main(){
	printf("Enter the length of the array: ");
	int n;
	scanf("%d",&n);
	int ar1[n];
	for(int i=0;i<n;i++){
		printf("Enter %dth number: ",i+1);
		scanf("%d",&ar1[i]);
	}
	int Selem;
	printf("Enter the element to be searched: ");
	scanf("%d",&Selem);
	printf("Searching:\n");
	for (int i=0;i<n;i++ ){
	if(ar1[i]==Selem){
	printf("Index %d: %d\n",i,ar1[i]);
	}
	}
return 0;
}
