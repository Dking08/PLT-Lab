#include<stdio.h>
void gcd(int *a,int *b){
    int t;
    while(*b!=0){
    t=*b;
    *b=*a%*b;
    *a=t;
    }
}
int main()
{
    int a,b;
    printf("Enter the first number: ");
    scanf("%d",&a);
    printf("Enter the second number: ");
    scanf("%d",&b);
     int p=a*b;
    gcd(&a,&b);
   
    printf("The GCD  is: %d\n",a);
    printf("The LCM is: %d\n",p/a);
}
