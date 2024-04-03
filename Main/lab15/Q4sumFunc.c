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
for( int i= 0; i<n;i++){
        printf("Element %d: %d\n",i+1,arr[i]);
}
printf("The sum is %d", sum(arr,n));

return 0;
}

int sum(int *Arr, int size){

int Sum=0;
for(int i=0;i<size;i++){
        Sum += Arr[i];
}
return Sum;
}
