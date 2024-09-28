#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age;
    printf("veuillez enter l'age :\n");
    printf("age = ");
    scanf("%d",&age);
    if(18<age) printf("\nVous etes eligible pour vote ");
    else printf("\nvous n'etes pas eligible pour votr");
    return 0;
}
