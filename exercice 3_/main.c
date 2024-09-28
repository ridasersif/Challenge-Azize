#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,X;
    printf("veuillez enter un nombre :\nN =");
    scanf("%d",&n);
     X=0;
     for (i=2;i<=n-1;i++)
    {
        if(n%i==0){
        X=1;
        break;
        }

     }
     if(X==1){
     printf("%d est divisible par %d donc le nomber no pas premeir ",n,i);

     }
     else printf("%d et premeir",n);
    return 0;
}
