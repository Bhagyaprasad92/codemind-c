#include<stdio.h>
int main(){
    int a,sum=0,avg;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    printf("%.2f",(float)sum/a);
}