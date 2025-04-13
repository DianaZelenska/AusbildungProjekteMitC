#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*int size = 5;
    int arr[size];

    for( int i = 0; i < size; i++)
    {
        printf("Geben Sie die %d. Zahl ein: ", i + 1);
        scanf("%d", &arr[i]);
    }

    for( int i = 0; i < size; i++)
    {
        printf("%d\n", arr[i]);
    } */




    // Fläche für Räumen berechnen und in Array speichern
    // Dann Flaechen sortieren
    int size = 5;
    int arr[size];
    int breite, laenge;
    int flaeche = 0;
    // int min = 0, max = 0;
    const int false = 0;
    const int true = !false;

    for( int i = 0; i < size; i++)
    {
        printf("Raum %d Breite: ", i + 1);
        scanf("%d", &breite);
        printf("Raum %d Laenge: ", i + 1);
        scanf("%d", &laenge);
        arr[i] = breite * laenge;
    }

    int getauscht = true;
    int help;

    while( getauscht)
    {
        getauscht = false;
        for( int i = 0; i < 5 - 1; i++)
        {
            if( arr[i] > arr[i+1])
            {
                help = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = help;
                getauscht = true;
            }
        }
    }

    for( int i = 0; i < size; i++)
    {
        printf("%d\n", arr[i]);
        flaeche += arr[i];

       /* if (arr[i] < arr[min])
        {
            min = i;
        }

        if (arr[i] > arr[max])
        {
            max = i;
        } */
    }

    printf("Gesamtflaeche: %d\n", flaeche);

    printf("Der kleinste Raum hat %d qm\n", arr[0]);
    printf("Der groesste Raum hat %d qm\n", arr[4]);

    return 0;
}
