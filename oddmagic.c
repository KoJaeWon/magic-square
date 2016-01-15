#include<stdio.h>
void main()
{
    int n, i, s, c, a[9][9] ;

    printf("Enter  size of the magic square (OLY ODD)  ") ;
    scanf("%d", &n) ;
    if(n%2==0)
    {
        printf("magic square imposible");



    }
    else
    {


    printf("\nThe magic square for %d x %d is :\n\n", n, n) ;
    s = (n + 1) / 2 ;
    i = 1 ;
    for(c = 1 ; c <= n * n ; c++)
    {
        a[i][s] = c ;
        if(c % n == 0)
        {
            i = i + 1 ;
            goto loop ;
        }
        if(i == 1)
        i = n ;
        else
        i = i - 1 ;
        if(s == n)
        s = 1;
        else
        s = s + 1 ;
        loop : ;
    }
    for (i = 1 ; i <= n ; i++)
        {
        for (s = 1 ; s <= n ; s++)
        {
            printf("%d\t", a[i][s]) ;
        }
        printf("\n\n") ;
    }

}
}
