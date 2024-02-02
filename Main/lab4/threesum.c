#include <stdio.h>
int main(){
int a,b,c,d;
printf("Enter the number:");
scanf("%d",&a);
b = (a/10)%10;
c = a%10;
d = (a/100)%100;
printf("The sum is: %d",c+b+d);
return 0;
}
