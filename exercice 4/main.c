#include <stdio.h>
#include <stdlib.h>

int main()
{
     int n,i;
     int T[5];
     printf("saisir les elements de tableaux :\n");
     for(i=0;i<5;i++)
     {
         printf("T[%d]=",i+1);
         scanf("%d",&T[i]);
     }
     printf("donc les element du tableaux sont :\n");

     for(i=0;i<5;i++)  printf("%d\t",T[i]);
     int max=T[0];
     int min=T[0];
     for(i=0;i<5;i++)
    {
        if(max<T[i]) max = T[i];
        else max = max;
    }
     for(i=0;i<5;i++)
    {
        if(min>T[i]) min = T[i];
        else min= min;
    }
    printf("\net max  = %d\net min = %d",max,min);
    return 0;
}
