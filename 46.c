#include<stdio.h>
#include<math.h>
#define PI 3.14
int main()
{
    float n,n1,a;
    scanf("%f",&n);
    
    a=PI/180;
    n1=sin(n*a);
    printf("%f",n1);
}
