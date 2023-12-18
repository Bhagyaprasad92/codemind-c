#include<stdio.h>
int main(){
    int a,i,s=0,e,flag=0;
    scanf("%d",&a);
    int arr[a];
    for(i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&e);
    for(int i=0;i<a;i++){
        if(e==arr[i]){
            flag=1;
        }
        
    }
        if(flag==1){
            printf("True");
        }
        else{
            printf("False");
        }
}