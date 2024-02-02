#include <stdio.h>
int main(){
int a,b,c,max;
printf("Enter the three numbers: ");
scanf("%d %d %d", &a,&b,&c);
if (a==b && b==c){printf("All the numbers are same");
return 0;}
if(a>c){
	if(a>b){
		max=a;
	}
	else if (a==b){
		printf("Two numbers having max: %d",a);
	return 0;
	}
	else{
		max=b;
	}
}
else if (c>=a){
	if (c>b && c!=a){
		max=c;
	}
	else if (c==b){
		printf("Two numbers having max: %d",c);
		return 0;
	}
	else if(c==a && c>b){
		printf("Two numbers having max: %d",c);
		return 0;
	}
	else{
		max=b;
	}
}
printf("The maximum number is: %d",max);
return 0;
}
