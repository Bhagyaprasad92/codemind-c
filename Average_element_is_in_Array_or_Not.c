#include<stdio.h>
int main(){
    int a,sum=0,i;
    scanf("%d",&a);
    int ar[a];
    for(i=0;i<a;i++){
        scanf("%d",&ar[i]);
        sum+=ar[i];
    }
    int avg=sum/a,flag=0;
    for(i=0;i<a;i++){
        if(avg==ar[i])
    {    flag=1;
        break;}
    }
    if(flag==1){
        printf("True");
    }
    else{
        printf("False");
    }
}