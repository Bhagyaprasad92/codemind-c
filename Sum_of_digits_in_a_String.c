#include<stdio.h>
int main(){
    char s1[50];
    scanf("%[^
]s",s1);
    int sum=0,i;
    for(i=0;s1[i]!=NULL;i++){
        if(s1[i]>=48 && s1[i]<=57){
            sum+=s1[i]-'0';
        }
    }
    s1[i]=NULL;
    printf("%d",sum);
}