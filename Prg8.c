#include<stdio.h>

int main(void)
{
    long long n, temp, digit, reverse=0, sum=0;
    int count=0;

    printf("Enter a positive integer:");
    scanf("%lld",&n);
    if(n<=0)
    {
        printf("Please enter a positive integer.\n");
        return 0;
    }
    temp=n;
    while(temp>0)
    {
        digit=temp%10;
        count++;
        sum=sum+digit;
        reverse = reverse*10+digit;
        temp=temp/10;
    }
    printf("Number of digits=%d\n",count);
    printf("Sum of digits=%lld\n",sum);
    printf("Reversed number=%lld\n",reverse);

    if(reverse==n)
    printf("%lld is a palidrome.\n",n);
    else
    printf("lld is not a palidromme.\n",n);
    return 0;
}