#include <stdio.h>
#include <math.h>

int main(){
int num;
printf("Enter the number: ");
scanf("%d",&num);
int n = (int) log2(num);
printf("n= %d\n",n);
int binary[n+1];
for(int i=n;num!=0;i--){
	binary[i] = num%2;
	num /= 2;	
}
for(int i=0; i<n+1; i++){
	printf("%d ",binary[i]);
}

return 0;
}
