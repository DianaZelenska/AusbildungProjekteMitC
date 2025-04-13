#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Sortieralgorhytmus
    int arr[] = { 3, 5, 2, 7, 0, 6, 1, 9, 4, 8};
    int help;
    const int false = 0;
    const int true = !false;

    for( int i = 0; i < 10; i++)
    {
        printf("%d\n", arr[i]);
    }

    int getauscht = true;

    while( getauscht )
    {
        getauscht = false;
        for( int i = 0; i < 9; i++)
        {
            printf("Untersuche %d %d\n", arr[i], arr[i+1]);
            if( arr[i] > arr[i+1])            // <, um absteigend zu sortieren
            {
                help = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = help;
                getauscht = true;
            }
        }
    }
    printf("\nSortiert:\n");
    for( int i = 0;  i < 10; i++)
    {
        printf("%d\n", arr[i]);
    }
    return 0;
}
