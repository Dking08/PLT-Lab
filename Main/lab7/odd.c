#include <stdio.h>
int main(){
int num; int a;
printf("Enter the range: ");
scanf("%d %d",&a,&num);
printf("The odd numbers between a and b is\n");
if(a%2==0){a+=1;}
for(int i=a; i<=num; i+=2){
	printf("%d\n",i);
}
return 0;
}
