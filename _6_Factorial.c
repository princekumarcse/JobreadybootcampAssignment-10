//6.Write a function to calculate the factorial of a number. (TSRS)
int factorial(int x)
{
    int fact=1,i;
    for(i=1;i<=x;i++)
    {
        fact=fact*i;
    }
    return fact;
}