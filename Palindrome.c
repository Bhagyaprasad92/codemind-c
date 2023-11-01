#include<stdio.h>
int main(){
    int a,r,re=0,org;
    scanf("%d",&a);
    org=a;
    while(a!=0){
        r=a%10;
        re=re*10+r;
        a/=10;
    }
    if(org==re)
    printf("Palindrome");
    else
    printf("Not Palindrome");
}