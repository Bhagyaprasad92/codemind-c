#include<stdio.h>
#include<math.h>
int main(){
    int a,r,count=0,sum=0;
    scanf("%d",&a);
   int t=a;
    while(a!=0){
    count++;
    a/=10;
    }
    a=t;
    while(a!=0){
            r=a%10;
            sum+=pow(r,count);
            a/=10;
            count--;
        }
        if(sum==t){
        printf("True");}
        else{printf("False");}
    
}