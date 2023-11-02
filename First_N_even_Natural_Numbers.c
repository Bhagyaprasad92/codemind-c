#include<stdio.h>
int main(){
    int a,i;
    scanf("%d",&a);
    for(int i=a*2;i>=1;i--){
        if(i%2==0){
            printf("%d ",i);
        }
    }
}