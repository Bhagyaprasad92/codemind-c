#include<stdio.h>
int main(){
    int a,b,sum=0;
    scanf("%d",&a);
    while(a>0)
    {
         b=a%10;
        sum+=b;
        a/=10;
        
    }
    printf("%d",sum);
}