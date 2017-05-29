#include<stdio.h>
void main()
{
    int inputnumber,row, col, num;
    int magicsquare[9][9] ;  

    printf("Enter  size of the magic square (OLY ODD)  ") ;
    scanf("%d", &inputnumber) ;
    if(inputnumber%2==0)
        printf("magic square is imposible");

    else
    {
     printf("\nThe magic square for %d x %d is :\n\n", inputnumber, inputnumber);
     col=(inputnumber + 1) / 2 ;
     row = 1 ;
        
     for(num = 1 ; num <= inputnumber *inputnumber ; num++)
     {
        magicsquare[row][col] = num ;
        if(num % inputnumber == 0)
        {
            row += 1 ;
          continue;
        }
        if(row == 1)
        row= inputnumber ;
        else
        row -= 1 ;
        if(col == inputnumber)
        col = 1;
        else
        col += 1;
        
    }
    for (row = 1 ; row <= inputnumber ; row++)
        {
        for (col = 1 ; col <= inputnumber ; col++)
        {
            printf("%5d", magicsquare[row][col]) ;
        }
        printf("\n\n") ;
    }

}
}
