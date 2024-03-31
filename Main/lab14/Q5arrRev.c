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
for( int i= n-1; i>=0;i--){
        printf("Element %d: %d\n",i+1,arr[i]);
}
return 0;
}
