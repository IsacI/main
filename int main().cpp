int main()
{
    int n, sum=0, prod=1;
    int d;
    printf ("enter the nunber:");
    scanf("%d", &n);
    while(n>0)
{
    d=n%10;
    sum=sum+d;
    prod=prod*d;
    n=n/10
}
if(sum==prod)
printf("Given number is spy number");
else
printf("given number is not spy number");

return 0;
}