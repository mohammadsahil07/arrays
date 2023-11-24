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
printf("please enter the data in second array ");
for(int i=0;i<n;i++){
    scanf("%d",&arr2[i]);
}

int comb[2*n];
for(int i=0;i<n;i++){
    comb[i]=arr[i];
}
for(int i=0,j=n;i<n,j<2*n;i++,j++){
    comb[j]=arr2[i];
}

for(int i=0;i<2*n;i++){
    for(int j=0;j<2*n;j++){
        if(comb[i]>comb[j]){
            int temp=comb[i];
            comb[i]=comb[j];
            comb[j]=temp;
        }
    }
}
for(int i=0;i<2*n;i++){
    printf("%d\t",comb[i]);
}
return 0;
}