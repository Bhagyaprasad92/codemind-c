#include<stdio.h>
#include<math.h>
int main(){
    int i,a,sum=0;
    for(i=1;;i++){
        scanf("%d",&a);
        if(a!=-1)
        printf("%d
",a*a);
        if(a==-1){
            break;
        }
    }
}