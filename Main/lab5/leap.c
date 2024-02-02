#include <stdio.h>

int main(){
int year;
printf("Enter a year: ");
scanf("%d",&year);
//if(year % 400 == 0){
//	printf("A leap year");
//}
//else{printf("Not a leap year");}	
if (year % 4 ==0 && year %100 !=0){
	printf("A leap year");
}else{printf("Not a leap year");}

return 0;
}
