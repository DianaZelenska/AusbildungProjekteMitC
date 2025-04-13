#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char name[] = "Hallo";
char passwort[] = "ABCDE";
char nameeing[10];
char pweing[8];

void uberpruefen(char *pweing, char *passwort);
void verschluesseln(char *passwort, char *verschluesselt);
void entschluesseln(char *verschluesselt, char *entschluesselt);


int main()
{
    char verschluesseltPasswort[8];
    char entschluesseltPasswort[8];

    printf("Benutzername: ");
    scanf("%9s", nameeing);
    printf("Passwort: ");
    scanf("%7s", pweing);

    uberpruefen(pweing, passwort);

    verschluesseln(passwort, verschluesseltPasswort);
    printf("Verschluesseltes Passwort: %s\n", verschluesseltPasswort);

    entschluesseln(verschluesseltPasswort, entschluesseltPasswort);
    printf("Entschluesseltes Passwort: %s\n", entschluesseltPasswort);
    return 0;
}

void uberpruefen(char *pweing, char *passwort)
{
    if(strncmp(pweing, passwort, 8) == 0)
        printf("Richtig!\n");
    else
        printf("Falsch\n");
}

void verschluesseln(char *passwort, char *verschluesselt)
{
    while (*passwort != '\0') {
        *verschluesselt = *passwort + 1;
        passwort++;
        verschluesselt++;
    }
    *verschluesselt = '\0';
}

void entschluesseln(char *verschluesselt, char *entschluesselt)
{
    while (*verschluesselt != '\0') {
        *entschluesselt = *verschluesselt - 1;
        verschluesselt++;
        entschluesselt++;
    }
    *entschluesselt = '\0';
}
