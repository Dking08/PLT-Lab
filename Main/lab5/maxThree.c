#include <stdio.h>
int main(){
int a,b,c,max;
printf("Enter the three numbers: ");
scanf("%d %d %d", &a,&b,&c);
max = a;
if(b>max){
max = a;
}
if(c>max){
max = c;
}
printf("The maximum number is: %d",max);
return 0;
}
