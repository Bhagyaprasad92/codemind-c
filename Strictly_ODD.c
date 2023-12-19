#include<stdio.h>
int main()
{
    int a,i,flag=0;
    scanf("%d",&a);
    int ar[a];
    for(i=0;i<a;i++)
    {
        scanf("%d",&ar[i]);
    
        
    }
    for(int i=0;i<a;i++)
    {
        if(i%2==0 && ar[i]%2!=0)
        {
            flag=1;
            break;
        }
    }
    if(flag==0){
        printf("True");
    }
    else{
        printf("False");
    }
}