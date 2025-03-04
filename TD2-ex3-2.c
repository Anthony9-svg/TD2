/*Algorithme:Tableau_sans_occurence0
Variables n , i, l : entiers;
          tab[50]; tableau d'entiers
          
Debut
faire 
  ecrire("Entrez une taille inferieure à 50")
  lire (n);
tant que (n>50)

pour(i=0;i<n;i++)
  ecrire ("tab[i]=");
  lire (tab[i]);
finpour

pour(i<-0;i<n;i++)
  ecrire("tab[i]");
fin pour
l=0
pour(i<-0;i<n;i++)
  si (tab[i]=0)
    tab[l]=tab[i];
    l=l+1;
  finsi
fin pour
ecrire("Le tableau sans occurence 0 est:");
pour(i<-0;i<n;i++)
  afficher("tab[i]");
fin pour

fin
*/
#include <stdio.h>
int main ()
{
  int n , i , tab[50] , l ;
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
   for (i=0;i<n;i++)
   {
    if (tab[i]!=0)
    {
      tab[l]=tab[i];
      l=l+1;
    }
  }
  printf("Le tableau sans occurence 0 est :\n");
    for(i=0;i<l;i++)
  {
    printf("tab[%d]=%d\n",i,tab[i]);
  }
  return 0;
}
