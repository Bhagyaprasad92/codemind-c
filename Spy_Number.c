#include<stdio.h>
int main(){
    int a,b,sum=0,m=1;
    scanf("%d",&a);
    while(a!=0)
    {
         b=a%10;
        sum+=b;
        m*=b;
        a/=10;
        
    }
    if(m==sum){
        printf("Spy Number");}
        else
        printf("Not Spy Number");
}