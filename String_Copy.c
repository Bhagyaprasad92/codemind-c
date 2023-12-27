#include<stdio.h>
#include<string.h>
int main(){
    char str[40];
    scanf("%[^
]s",str);
    char str1[40];
    strcpy(str1,str);
    printf("%s",str1);
}