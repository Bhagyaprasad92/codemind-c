#include<stdio.h>
int main(){
    int a,b,gcd,lcm;
    scanf("%d%d",&a,&b);
    for(int i=1;i<=a;++i){
        if(a%i==0 && b%i==0){
            gcd=i;
        }
    }
    lcm=gcd;
    printf("%d",lcm);
}