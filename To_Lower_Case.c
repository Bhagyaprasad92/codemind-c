#include<stdio.h>
int main(){
    char str[50];
    scanf("%[^
]s",str);
    for(int i=0;str[i]!=NULL;i++){
      if(str[i]>=65&&str[i]<=90){
          str[i]+=32;
      }
    }
    printf("%s",str);
}