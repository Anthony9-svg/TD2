/*
Algorithme:tableaux_positifs_et_negatifs
Variables n , i , a , j ,k : Entiers
          tab[50],Tpos[0],Tneg[50]:tableau d'entiers

Debut
faire 
  ecrire("Entrez une taille inferieure à 50")
  lire (n);
tant que (n>50)

pour(i<-0;i<n;i++)
  ecrire ("tab[i]=");
  lire (tab[i]);
finpour; 
pour(i<-0;i<n;i++)
  ecrire("tab[i]=tab[i]")
finpour
pour (i<-0;in;i++)
  si (tab[i]<0)
    Tneg[j]<-tab[i];
    j=j+1;
  fin si
fin pour
pour (i<-0;i<n;i++)
  afficher ("Tneg[i]=Tneg[i]");
finpour
k<-0;
pour (i<-0;in;i++)
  si (tab[i]>0)
    Tpos[k]<-tab[i];
    k=k+1;
  fin si
fin pour
pour (i<-0;i<n;i++)
  afficher ("Tpos[i]=Tpos[i]");
finpour

fin
*/
#include <stdio.h>
int main ()
{
  int n , i , tab[50] ,a,Tpos[50],Tneg[50],j , k ;
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
    j=0;
   for (i=0;i<n;i++)
   {
    if (tab[i]<0)
    {
      Tneg[j]=tab[i];
      j=j+1;
    }
   }
   for (i=0;i<j;i++)
   {
    printf("Tneg[%d]=%d\n",i,Tneg[i]);
   }  
   printf("\n");
   k=0;
   for (i=0;i<n;i++)
   {
    if (tab[i]>0)
    {
      Tpos[k]=tab[i];
      k=k+1;
    }
   }
   for (i=0;i<k;i++)
   {
    printf("Tpos[%d]=%d\n",i,Tpos[i]);
   }
   return 0;
}
