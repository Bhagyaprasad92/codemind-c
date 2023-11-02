#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    for(int i=a*2;i>=1;i=i-2){
        printf("%d ",i);
    }
}