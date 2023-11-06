#include<stdio.h>
int main(){
    int a,r,re=0;
    scanf("%d",&a);
    while(a!=0){
        r=a%10;
        re=re*10+r;
        a/=10;
    }
    printf("%d",re);
}