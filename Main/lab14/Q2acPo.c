#include <stdio.h>
int main(){

int n=10;
printf("The value is %d\n",n);
int *Nptr = &n;
printf("The value of pointer is: %u\n",Nptr);
printf("The value of adress is: %u\n",&n);
printf("The value of n using pointer is: %d",*Nptr);

return 0;
}
