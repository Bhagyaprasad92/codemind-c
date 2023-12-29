#include<stdio.h>
#include<string.h>
int main()
{
    char s1[50];
    scanf("%[^
]s",s1);
    int len=strlen(s1),flag=1;
    for(int i=0;i<len;i++){
        if(s1[i]!=s1[len-i-1]){
            flag=0;
            break;
        }
    }
    if(flag==1){
        printf("Palindrome");
    }
    else{
        printf("Not Palindrome");
    }
}