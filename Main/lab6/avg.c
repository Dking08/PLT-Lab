#include <stdio.h>
int main(){
int sum, num, index;
index=1;
sum=0;
printf("Enter 10 numbers:\n");
while (index<11){
	scanf("%d",&num);
	sum+=num;
	index++;
}
printf("Total : %d and avg: %f", sum, (float) sum/10);
return 0;
}
