/*
Algorithme:Tableau_inverse
Variables n, i , o : entiers
          T[50],tab[50]:tableau d'entiers
          
Debut
faire 
  ecrire("Entrez une taille inferieure à 50")
  lire (n);
tant que (n>50)

pour(i=0;i<n;i++)
  ecrire ("tab[i]=");
  lire (tab[i]);
finpour
o=n-1;
pour (i<-0;i<n;i++)
  T[o]=tab[i]
  o<-o-1
fin pour
afficher ("L'inverse du tableau est:");
pour (i<-0;i<n;i++)
  afficher ("T[i]");
fin pour

fin
*/
#include <stdio.h>
int main ()
{
  int n , i , T[50] , o , tab[50]  ;
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
  o=n-1;
   for (i=0;i<n;i++)
   {
      T[o]=tab[i];
      o=o-1; 
  }
  printf("L'inverse du tableau est:\n");
  for (i=0;i<n;i++)
  {
      printf("tab[%d]=%d\n",i,T[i]);
  }
   return 0;  
}
