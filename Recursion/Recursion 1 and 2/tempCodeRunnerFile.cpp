int noofways(int i , int j ,int m ,  int n)
{
    // base calls
    if(i==m && j==n)
    return 1;
    else if(i>m || j>n)
    return 0;
    //recursive call
    return noofways(i+1,j,m,n) + noofways(i,j+1,m,n);
}