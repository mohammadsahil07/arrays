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
int max=arr[0];
for(int i=0;i<n;i++){
    if(max<arr[i]){max=arr[i];}
}

int min=arr[0];
for(int i=0;i<n;i++){
    if(min>arr[i]){min=arr[i];}
}
printf("Maximum value of array is %d\nMinimum value of array is %d",max,min);
return 0;
}