#include <stdio.h>
#include <stdlib.h>

int main()
{
    int lar,lon,laire,perimetre;
    printf("veuillez enter la longueur et la largeur de la rectangl :\n");
    printf("la longueur = ");
    scanf("%d",&lon);
    printf("la la largeur = ");
    scanf("%d",&lar);
    laire=lar*lon;
    perimetre=2*(lar+lon);
    printf("donc \nlaire = %d \nperimetre = %d",laire,perimetre);

    return 0;
}
