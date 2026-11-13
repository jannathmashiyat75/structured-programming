#include<stdio.h>
void greeting(int n){
    if(n==0) return 0;
        printf("goodmorning\n");
    greeting (n-1);
    return;
}
int main(){

int n;
printf("enter a number :\n");
scanf("%d",&n);
greeting(n);
    return 0;
}