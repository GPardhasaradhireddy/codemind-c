#include<stdio.h>
int main()
{
    int T,S,B,CAPACITY;
    scanf("%d%d%d",&T,&S,&B);
    CAPACITY=(T*S*B);
    printf("%d KB",CAPACITY);
}