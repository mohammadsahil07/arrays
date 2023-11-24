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
int sum=0;
for(int j=0;j<n;j++){
    sum=sum+arr[j];
}
printf("Sum of the array is %d",sum);
return 0;
}