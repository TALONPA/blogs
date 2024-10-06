#include <stdio.h>
#include <stdlib.h>
int main()
{
    int  i,x,y,fact;
    printf("Entrer le nombre dont vous voulez le factoriel: ");
    scanf("%d", &x);
    y=1;
    if(x<0){
       printf("Veuillez entrer une valeur positive \n\n");
    }else if(x>0){
       for(i=1; i<x-1; i++){
         y=y*(x-i);
       }
       fact=x*y;
       printf("Le factoriel est %d:",fact);
    }else{
        printf("Son factoriel est: 1.....");
    }
    return 0;
}
