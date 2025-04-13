#include <stdio.h>
#include <stdlib.h>


// 5 Zahlen mit Pointer einlesen/ function summe (Addition)
int addiere(int *, int);

int main()
{
    int zahlen[5];
    int anzahl = sizeof(zahlen)/sizeof(int);
    //int *poi = zahlen;

    for( int i = 0; i < anzahl; i++)
    {
        printf("Zahl %d: ", i+1);
        scanf("%d", &zahlen[i]);
    }

   /*  for( int i = 0; i < anzahl; i++, poi++)
    {
        printf("Zahl %d: ", i+1);
        scanf("%d", poi);
    }*/

    for( int i = 0; i < anzahl; i++)
    {
        printf("%d\n", zahlen[i]);
    }
    printf("\nSumme: %d\n", addiere(zahlen, anzahl));

    return 0;
}
int addiere(int *arr, int anz)
{
    int summe = 0;

    for( int i = 0; i < anz; i++, arr++ )
    {
        summe += *arr;
    }
    return summe;
}
