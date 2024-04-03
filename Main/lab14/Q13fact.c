#include<stdio.h>
void fact(int *n){
    int f=1;
    for(int i=1;i<=*n;i++) f*=i;
    *n=f;
}
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    fact(&n);
    printf("The factorial is: %d",n);
}
