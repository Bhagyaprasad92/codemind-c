#include<stdio.h>
int main(){
    char st[60];
    int c=0;
    scanf("%[^
]s",st);
    for(int i=0;st[i]!=NULL;i++){
        if(st[i]>=65&&st[i]<=90){
            c++;
        }
    }
    printf("%d",c);
}