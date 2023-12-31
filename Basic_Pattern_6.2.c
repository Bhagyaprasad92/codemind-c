#include<stdio.h>
int main(){
    int a,i,j,k;
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        for(k=i;k<a;k++){
            printf(" ");
        }
        for(j=1;j<=i;j++){
            printf("%d ",a-i+1);
        }
        printf("
");
    }
}