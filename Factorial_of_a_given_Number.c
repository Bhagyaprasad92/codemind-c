#include<stdio.h>
int main(){
int a,b=1,i;
scanf("%d",&a);
for(int i=1;i<=a;i++){
    b*=i;
}
printf("%d",b);
}