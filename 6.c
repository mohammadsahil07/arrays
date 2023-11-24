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
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        if(arr[i]>arr[j]){
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
}
for(int i=0;i<n;i++){
    printf("%d\t",arr[i]);
}


return 0;
}