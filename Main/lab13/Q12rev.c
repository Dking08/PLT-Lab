#include<stdio.h>
void rev(int *a){
    int rev=0;
    while(*a>0){
      int d=*a%10;
      rev=(rev*10)+d;
      *a/=10;
    }
    *a=rev;
}
int main()
{
    int a;
    printf("Enter the number to reverse: ");
    scanf("%d",&a);
    rev(&a);
    printf("The reversed is : %d \n",a);
    return 0; 
}
