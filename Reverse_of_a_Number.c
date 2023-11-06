#include<stdio.h>
int main(){
    int n,re=0,a;
    scanf("%d",&a);
    while(a!=0){
        n=a%10;
        re=re*10+n;
        a/=10;
    }
    printf("%d",re);
}