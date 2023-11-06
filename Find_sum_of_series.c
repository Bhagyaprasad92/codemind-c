#include<stdio.h>
int main(){
    int a;
    float b=0.0;
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        b+=(1.0/i);
    }
    printf("%.2f",b);
}