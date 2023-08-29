#include<stdio.h>
int main(){
    char s[] ="Pogramming is fun";
    int i;

    for(i=0; s[i] != '\0'; i++);

    printf("Enter of the string : %d",i);

    return 0;
}
