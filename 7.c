#include<stdio.h>
int main()
{

int n,a;
printf("please enter the size of array ");
scanf("%d",&n);

int arr[n],odd[n],even[n];
printf("please enter the data in array ");
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}

for(int i=0,j=0;i<n,j<n;i++,j++){
    if(arr[i]%2==0){even[j]=arr[i];}
}
for(int i=0;i<n;i++){
    printf("%d",even[i]);
}
return 0;
}