#include<stdio.h>
int main()
{
    int cp,sp,pro=0,los=0;
    printf("Enter Cost price of product\n");
    scanf("%d",&cp);
    printf("Enter Selling price of product\n");
    scanf("%d",&sp);
    if(sp>cp){
    pro=(sp-cp);
    printf("Seller made profit of rs:%d",pro);
    }
    else{
    los=(cp-sp);
    printf("Seller suffered loss of rs:%d",los);
    }
    return 0;
}