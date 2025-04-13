#include <stdio.h>
#include <stdlib.h>
#include <string.h>


// Artikel speichern, anzeigen, suchen

int auswahl();
void anlegen();
void anzeigen();
void suchen();
char dateiname[] = "Artikel.dat";

int main()
{
    int wahl;

    while( ( wahl = auswahl() ) != 0 )
    {
        switch(wahl)
        {
            case 1: anlegen();
            break;
            case 2: suchen();
            break;
            case 3: anzeigen();
            break;
        }
    }
    return 0;
}

int auswahl()
{
    int wahl;

    printf("1 Artikel anlegen\n");
    printf("2 Artikel suchen\n");
    printf("3 alle Artikel anzeigen\n");
    printf("0 Abbruch\n");
    printf("Ihre Wahl: ");
    scanf("%d", &wahl);
    return wahl;

}

void anlegen()
{
    FILE * datei = NULL;
    datei = fopen(dateiname, "a");
    char puffer[100];

    if( datei != NULL)
    {
        printf("ArtNR: ");
        scanf("%s", puffer );
        fprintf(datei, "%s\n", puffer);
        printf("ArtBez: ");
        scanf("%s", puffer );
        fprintf(datei, "%s\n", puffer);
        printf("ArtPreis: ");
        scanf("%s", puffer );
        fprintf(datei, "%s\n", puffer);

        fclose(datei);
    }
}

void suchen()
{
    char suche[20];
    char artNr[20];
    char artBez[20];
    char artPreis[20];
    FILE * datei = NULL;

    datei = fopen(dateiname, "r");
    if( datei != NULL)
    {
        printf("Suchbegriff: ");
        scanf("%s", suche);

        while( !feof(datei))
        {
            fgets(artNr, 20, datei );
            if(feof(datei))
                break;
            fgets(artBez, 20, datei );
            fgets(artPreis, 20, datei );
            artNr[strlen(artNr)-1] = '\0';
            artBez[strlen(artBez)-1] = '\0';
            artPreis[strlen(artPreis)-1] = '\0';
            if( strstr(artBez, suche))
                printf("%s %s %s\n", artNr, artBez, artPreis );
        }
        fclose(datei);
    }

}

void anzeigen()
{
    char artNr[20];
    char artBez[20];
    char artPreis[20];

    FILE * datei = NULL;
    datei = fopen(dateiname, "r");


    if(datei != NULL)
    {
        while(!feof(datei))
        {
            fgets(artNr, 20, datei);
            if(feof(datei))
                break;
            fgets(artBez, 20, datei);
            fgets(artPreis, 20, datei);
            artNr[strlen(artNr)-1] = '\0';
            artBez[strlen(artBez)-1] = '\0';
            artPreis[strlen(artPreis)-1] = '\0';

            printf("%s %s %s\n", artNr, artBez, artPreis);
        }
    }
    fclose(datei);
}
