/*
Algorithme:Tableau de taille max 50
Variables n , i , tab[50] , s;

Debut
  faire
    afficher("Entrez une taille inferieure à 50");
    lire (n)
  tant que (n>50);
  fintantque
  pour(i=0;i<n;i++)
    afficher("tab[i]=")
    lire(tab[i])
  finpour
  pour(i=0;i<n;i++)
    afficher("tab[i]=tab[i]")
  finpour;
   s=0;
  pour(i=0;i<n;i++)
    s=s+tab[i];
  finpour
  afficher("La somme est égale à s")
 
fin
*/
#include <stdio.h>
int main ()
{
  int n , i , s , tab[50];
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
   for (i=0;i<n;i++)
  { 
    printf("tab[%d]=%d\n",i,tab[i]);
  }
  s=0;
  for (i=0;i<n;i++)
  {
    s=s+tab[i];
  }
  printf("Leur somme est égale à %d\n",s);
  return 0;
}
