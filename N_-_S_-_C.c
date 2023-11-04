#include<stdio.h>
int main(){
    int a,b,i;
    scanf("%d%d",&a,&b);
        for(int i=1;i<b;i++){
            printf("%d %d %d
",a+i,(a+i)*(a+i),(a+i)*(a+i)*(a+i));
             if((a+i)==b-1){
                break;}   
            }
    }
