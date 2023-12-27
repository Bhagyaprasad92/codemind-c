#include<stdio.h>
int main(){
    char str[60];
    scanf("%[^
]s",str);
    int c=0,i;
    for(int i=0;str[i]!=NULL;i++){
        if(str[i]>=48&&str[i]<=57){
            break;
        }
        else{
            c++;
        }
    }
    str[i]=NULL;
    printf("%d",c);
}