#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int t=a,sum=0;
    for(int i=1;i<a;i++){
        if(a%i==0){
            sum+=i;
        }
    }
    if(sum==t){
        printf("True");
    }
    else{
        printf("False");
    }
}