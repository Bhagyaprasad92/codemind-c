#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    char str[50][50];
    for(int i=0;i<a;i++){
        scanf(" %s",str[i]);
        int di=0;
        for(int j=0;str[i][j]!=NULL;j++){
        if(str[i][j]>=48&&str[i][j]<=57){
            di=1;
            break;
        }
    }
    if(di==1){
        printf("Yes
");
    }
    else{
        printf("No
");
    }
    }
}