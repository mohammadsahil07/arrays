#include<stdio.h>
int main()
{int n;
printf("Please enter the size of the array ");
scanf("%d",&n);
int arr[n],arr2[n];
printf("Please enter the data in first array ");
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
printf("Please enter the data in second array ");
for(int i=0;i<n;i++){
    scanf("%d",&arr2[i]);
}

int sum[2*n];

for(int i=0;i<n;i++){
    sum[i]=arr[i];
}
for(int i=n,j=0;i<2*n,j<n;i++,j++){
    sum[i]=arr2[j];
}
for(int i=0;i<2*n;i++){
    for(int j=i+1;j<2*n;j++){
        if(sum[i]>sum[j]){int temp=sum[i];
        sum[i]=sum[j];sum[j]=temp;}
    }
}

for(int i=0;i<2*n;i++){
    printf("%d\t",sum[i]);
}
return 0;
}