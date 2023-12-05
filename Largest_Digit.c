#include<stdio.h>
int main(){
    int a,lar=0;
    scanf("%d",&a);
    while(a){
        int r=a%10;
        if(lar<r){
            lar=r;
        }
        a/=10;
    }
    printf("%d",lar);
}