#include<stdio.h>
int main(){
    int n,digit;
    int sum=0;

    printf("Enter the number: ");
    scanf("%d",&n);

    while(n!=0){
        int digit = n % 10;
        sum = sum + digit;
        n /= 10;
    }

    printf("sum of digits = %d",sum);

    return 0;
}