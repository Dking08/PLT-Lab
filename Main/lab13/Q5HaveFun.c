#include <stdio.h>
int main(){

	int x=1,y=2;
	int *ip;
	int z[2] = {1,2};
	ip = &x;
	y=*ip;
	*ip=0;
	ip = &z[0];
	printf("The value of array[0] is %d\n",ip[0]);
	printf("The value of x is %d\n",x);
	printf("The value of y is %d\n",y);
return 0;
}
