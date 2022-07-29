/*8.Write a function to calculate the number of arrangements 
one can make from n items and r selected at a time. (TSRS)
*/
int arrang(int n,int r)
{
    int a;
    a=fact(n)/(fact(n-r));
    return a;
} 