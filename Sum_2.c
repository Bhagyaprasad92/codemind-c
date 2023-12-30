#include<stdio.h>
int main(){
    int a,b,c,d,sum=0;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    for(int i=a;i<=b;i++){
        if(i%c==0&&i%d!=0){
            sum+=i;
        }
    }
    printf("%d",sum);
}