#include<stdio.h>
int main()
{
    int n,r,sum=0;
    scanf("%d",&n);
    int s = n*n;
    int t=s;
    while(s!=0)
    {
        r=s%10; // 1 8
        sum+=r; //0+1=1--->1+8--->9
        s/=10; // 81/10 --> 8/10--->0
       
        // 10)8(0
    }
//    printf("%d*%d=%d sum of sqaure = %d
",n,n,t,sum);
    if(sum==n)
    
    printf("Neon Number");
    else
    printf("Not Neon Number");
}