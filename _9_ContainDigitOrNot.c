/*9.Write a function to check whether a given
number contains a given digit or not. (TSRS) 
*/
int chechdigit(int x,int d)
{
    int r;
    while(x)
    {
        r=x%10;
        if(r==d)
          return 1;
         x=x/10;
    }
     return 0;
}