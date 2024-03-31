#include <stdio.h>
int main(){
int n;
printf("Enter the size of the array: ");
scanf("%d",&n);
int arr[n];
int *ptr = arr;
for( int i= 0; i<n;i++){
        printf("Enter element: ");
        scanf("%d",ptr+i);
}
ptr = (int*) malloc(sizeof(int)*n);
printf("The legit values are %d", Lcheck(ptr,n));

return 0;
}

int Lcheck(int *Arr, int size){

int count=0;
for(int i=0;i<size;i++){
        printf("%d\n",Arr[i]);
}
return count;
}
