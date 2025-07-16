#include<stdio.h>
int main()
{
    int a,b,c=0;
    printf("Enter two Numbers");
    scanf("%d%d",&a,&b);
    printf("\nbefore changing:a=%d&b=%d",a,b);
    c=a;a=b;b=c;
    printf("After a:%d & b:%d",a,b);
    c=a;a=b;b=c;
    printf("\nback to normal:a=%d,b=%d",a,b);
    a=a+b;b=a-b;a=a-b;
    printf("After interchange using(+,-) a=%d & b=%d",a,b);
    a=a+b;b=a-b;a=a-b;
    printf("\nback to normal:a=%d,b=%d",a,b);
    if(a!=0 && b!=0){
        a=a*b;b=a/b;a=a/b;   
    }
    printf("After interchange using(*,/) a=%d & b=%d",a,b);


    return 0;

}