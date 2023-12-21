#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int ar[a];
    for(int i=0;i<a;i++){
        scanf("%d",&ar[i]);
    }
    int avg,sum=0,c=0;
     for(int i=0;i<a;i++){
        sum+=ar[i];}
        avg=sum/a;
    for(int i=0;i<a;i++){
        if(ar[i]<=avg){
            c++;
        }
    }
    printf("%d",c);
}