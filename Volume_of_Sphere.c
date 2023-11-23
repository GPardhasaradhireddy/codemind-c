#include<stdio.h>
int main()
{
    float R,volume;
    scanf("%f",&R);
    volume=(4/3.0)*3.14*(R*R*R);
    printf("%.2f",volume);
}