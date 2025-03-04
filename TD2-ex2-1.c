/*
Algorithme:maximum
Variables n , i , a, max: entiers
         tab[50]:tableau d'entiers
Debut
faire 
  ecrire("Entrez une taille inferieure à 50")
  lire (n);
tant que (n>50)

pour(i=0;i<n;i++)
  ecrire ("tab[i]=");
  lire (tab[i]);
finpour

max<-0
pour(i=0;i<n;i++)
  si max<tab(i)
    max=tab[i]
    a=i;
  finsi
fin pour

ecrire("Le maximum est tab[a]=tab[a]");

fin 
*/
#include <stdio.h>
int main ()
{
  int n , i , tab[50] , a , max;
  do 
  {
    printf("Entrez une taille inferieure à 50\n");
    scanf("%d",&n);
  }
  while (n>50);
  for (i=0;i<n;i++)
  {
    printf("tab[%d]=",i);
    scanf("%d",&tab[i]);
  }
  printf("\n");
  max=tab[0];
   for (i=1;i<n;i++)
   {
       if (max<tab[i])
       {
           max=tab[i];      
           a=i;
       }      
   }
   printf("Le maximum est tab[%d]=%d\n",a,max);
   return 0;
}
