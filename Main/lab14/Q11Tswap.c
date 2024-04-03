#include<stdio.h>
void swap(int *a,int *b,int *c){
    int tmp=*a;
    *a=*c;
    *c=*b;
    *c=tmp;
}
int main()
{
    int a,b,c;
    printf("Enter three numbers: ");
    scanf("%d%d%d",&a,&b,&c);
    swap(&a,&b,&c);
    printf("The swapped part is : %d %d %d\n",a,b,c);
    return 0; 
}
