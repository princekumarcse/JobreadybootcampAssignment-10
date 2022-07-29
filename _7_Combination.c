/*7.Write a function to calculate the number of combinations
 one can make from n items and r selected at a time. (TSRS)
 */
int combination(int n,int r)
{
    int c;
    c= fact(n)/(fact(r)*fact(n-r));
    return c;
}