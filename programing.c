#include <stdio.h>

int main()
{
    int a,b,temp;
    printf("enter the value of a");
    scanf("%d",&a);
    printf("enter the value of b");
    scanf("%d",&b);
    a=b;
    b=temp;
    temp=a;
    printf("after swapping a=%d,b=%d",a,b);
    return 0;
    
}
