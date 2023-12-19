#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int ar[a],s=0;
    for(int i=0;i<a;i++){
        scanf("%d",&ar[i]);
    }
    for(int i=0;i<a;i++){
        if(ar[i]%2==1){
            s=ar[i];
        }
    }
    printf("%d",s);
    
}