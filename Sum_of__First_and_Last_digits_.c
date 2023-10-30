#include<stdio.h>
int main(){
    int a,b;
    scanf("%d",&a);
    b=a%10;
    while(a>=10){
        a/=10;
    }
    a==a;
    printf("%d",a+b);
}