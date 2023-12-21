#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int ar[a],sum=0;
    for(int i=0;i<a;i++){
        scanf("%d",&ar[i]);
        sum+=ar[i];
    }
    int avg=sum/a,c=0;
    for(int i=0;i<a;i++){
        if(ar[i]<=avg){
            c++;
        }
    }
    printf("%d",c);
}