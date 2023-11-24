#include<stdio.h>
int main()
{
    int X,A,B;
    scanf("%d%d%d",&X,&A,&B);
    int a,b;
    a=A*1;
    b=B*2;
    int c;
    c=a+b;
    if(c<X)
    printf("Not Qualify");
    else
    printf("Qualify");
}