//Accept  amount in dollars and convert it to rupees (1$ =Rs. 70)
#include<stdio.h>

int convert(int doll)
{
    int Rs=0;
    Rs=doll*70;
    return Rs;
}

int main()
{
    int idollar=0;
    int rp=0;
    printf("Enter amount in dollar: ");
    scanf("%d",&idollar);
    rp=convert(idollar);
    printf("%d dollars is equals to  %d Rupees.",idollar,rp);
    return 0;
}