#include<stdio.h>
int main(){
    int a,b=0,c=1,d;
    scanf("%d",&a);
    printf("%d %d",b,c);
    for(int i=2;i<a;i++){
    d=b+c;
        printf(" %d",d);
        b=c;
        c=d;
    }
    
}