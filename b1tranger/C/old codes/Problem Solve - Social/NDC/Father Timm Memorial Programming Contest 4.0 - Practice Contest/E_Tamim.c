#include <stdio.h>

int main()
{
    int tc;
    scanf ( "%d", &tc );
    while ( tc-- )
    {
        int x;
        scanf ( "%d", &x );
        int a[x];
        int flodd=0, fleven=0;
        int odd=0, even=0;
        for ( int i=0; i<x; i++ )
        {
            scanf ( "%d", &a[i] );
            if ( a[i] % 2 == 0 )
            {
                fleven = 1;
                even++;
            }
            if ( a[i] % 2 == 1 )
            {
                flodd = 1;
                odd++;
            }
        }
        if ( flodd == 1 && fleven == 0 )
        {
            printf ( "0\n" );
        }
        else if ( flodd == 0 && fleven == 1 )
        {
            printf ( "-1\n" );
        }
        else
        {
            printf ( "%d\n", even );
        }
    }

    return 0;
}
