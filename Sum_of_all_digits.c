#include<stdio.h>
int dig(int a){
    int r,s=0;
    while(a!=0){
    r=a%10;
    s+=r;
    a/=10;
}printf("%d",s);
    return s;
}
int main(){
    int a,s;
    scanf("%d",&a);
    dig(a);
}