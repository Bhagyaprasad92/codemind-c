#include<stdio.h>
int main(){
    int n,a,re=0,org;
    scanf("%d",&a);
    org=a;
    while(a!=0){
        n=a%10;
        re=re*10+n;
        a/=10;
    }
   if(org==re){
        printf("True");}
        else
        printf("False");
}