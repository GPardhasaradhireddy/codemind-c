#include<stdio.h>
int main(){
    int n, m; 
    scanf("%d %d", &n, &m);
    float ans = (float)(n + m) / 2;
    printf("Average of %d and %d is: %.2f", n, m, ans);
}