#include <stdio.h>
int main(){
int n;
printf("Enter the size of the array: ");
scanf("%d",&n);
int *arr = calloc(n,sizeof(int));
for( int i= 0; i<n;i++){
        printf("Enter element: ");
        scanf("%d",arr+i);
}
for( int i= 0; i<n;i++){
        printf("Element %d: %d\n",i+1,arr[i]);
}
return 0;
}
