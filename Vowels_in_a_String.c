#include<stdio.h>
int add(char str[50],char vv){
        for(int i=0;str[i]!=NULL;i++){
        if(str[i]==vv){
            return i;
        }
    }
    return -1;
}
int main(){
    char str[50],vv;
    scanf("%[^
]s",str);
    scanf("
");
    scanf("%c",&vv);
    int cp=(add(str,vv));
   if(cp==-1){
       printf("False");
       }
       else{
           printf("True");
           printf("
%d",cp);
       }
}