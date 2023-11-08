#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    for(int i=0;i<a;i++){
        int n,m,k;
        scanf("%d%d%d",&n,&m,&k);
        if((m-k)>n)
        printf("YES
");
        else
        printf("NO
");
    }
}