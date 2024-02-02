#include <stdio.h>
int main(){
int a,b,c;
printf("Enter the number:");
scanf("%d",&a);
b = a/100000;
c = a%10;
printf("The sum is: %d",c+b);
return 0;
}
