#include<stdio.h>
#include<math.h>
int main(){
    int i,a,b;
    double sum=0.0;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++){
        sum=sum+sqrt(i);
    }
    printf("%.2lf",sum+0.0);
}