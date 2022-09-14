#include <stdio.h>
#include <stdlib.h>
#define PI 3.14
int osztas();
int szorzas();
int oszeadas();
int kivonas();
int korterker();



int main()
{   
    int relacio=0;
    printf("\nVálaszon műveletet\n1es összeadás\n2es kivonás\n3as szorzás\n4es osztás\n5ös kör ker ter\n");
    scanf("%d",& relacio);
    switch(relacio)
    {
    case 1 :
        oszeadas();
        break;
    case 2 :
        kivonas();
        break;
    case 3 :
        szorzas();
        break;
    case 4 :
        osztas();
        break;
    case 5 :
        korterker();
        break;
    default:
        break;
    }
    
    





return 0;
}

int osztas(){

    int oszto = 0;
    float osztando = 0, eredmeny = 0;
    // ertekek bekerese
    printf("\nAdja meg az osztandót ");
    scanf("\n %f", & osztando);
    printf("\nAdja meg az osztót ");
    scanf("\n %d", & oszto);
    // osztas elvegzese es eredmeny ki irasa
    eredmeny = osztando/oszto;
    printf("\nSzámítás: %f / %d = %.2f", osztando, oszto, eredmeny);

}

int szorzas(){

    float szorzo = 0;
    float szorzando = 0, eredmeny = 0;
    // ertekek bekerese
    printf("\nAdja meg az szorzandót ");
    scanf("\n %f", & szorzando);
    printf("\nAdja meg az szorzót ");
    scanf("\n %f", & szorzo);
    // szorzas elvegzese es eredmeny ki irasa
    eredmeny = szorzando*szorzo;
    printf("\nSzámítás: %f * %f = %.2f", szorzando, szorzo, eredmeny);

}

int oszeadas()
{
    int elsoszam = 0, masodikszam = 0, eredmeny = 0;

    printf("\nAdja meg az első számot ");
    scanf("\n %d", & elsoszam);
    printf("\nAdja meg az második számot ");
    scanf("\n %d", & masodikszam);
    eredmeny = elsoszam + masodikszam;
    printf("\n az %d és %d összege: %d", elsoszam, masodikszam, eredmeny);
}

int kivonas()
{
    int elsoszam = 0, masodikszam = 0, eredmeny = 0;

    printf("\nAdja meg az első számot ");
    scanf("\n %d", & elsoszam);
    printf("\nAdja meg az második számot ");
    scanf("\n %d", & masodikszam);
    eredmeny = elsoszam - masodikszam;
    printf("\n az %d és %d különbsége: %d", elsoszam, masodikszam, eredmeny);
}

int korterker()
{
    float kerulet = 0, terulet = 0, radius = 0;
    printf("\nAdja meg a kör sugarát ");
    scanf("\n%f", & radius);
    kerulet = 2 * PI * radius;
    terulet = radius * radius *PI;
    printf("\nA kör kerülete %f, a területe %f ", kerulet, terulet);
}