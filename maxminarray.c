#include<stdio.h>
#include<conio.h>
int main(){
    int arr[50];
    int max,min,i,n;

    printf("Enter size of array : ");
    scanf("%d",&n);

    printf("Enter the elemts : ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    max=min=arr[0];
    for(i=0;i<n;i++){
        if(min>arr[i])
        min = arr[i];
        if(max<arr[i])
        max = arr[i];
    }
    printf("MINIMUM = %d",min);
    printf("\nMAXMIMUM = %d",max);

    return 0;
}