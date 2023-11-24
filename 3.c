#include<stdio.h>
int main()
{
int n;
printf("please enter the size of array ");
scanf("%d",&n);
int arr[n];
printf("please enter the data in array ");
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
int arr2[n];
for(int i=0;i<n;i++){
    arr2[i]=arr[i];
}
printf("copied array ");
for(int j=0;j<n;j++){
    printf("%d\t",arr2[j]);
}
return 0;
}