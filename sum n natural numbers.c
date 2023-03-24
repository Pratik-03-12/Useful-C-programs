#include <stdio.h>

int sum(int);

int main(){
    int n;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    printf("The sum of the first %d natural numbers is  %d",n,sum(n));
    return 0;
}

int sum(int n){
    if (n==1)
    {
        return 1;
    }
    return n+sum(n-1);
}