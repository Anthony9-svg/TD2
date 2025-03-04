/*
Algorithme:Concatenation
Variables n , i, q , p : entiers  
          A[100],B[50]:tableau d'entiers

Debut
ecrire ("Donnez la taille du tableau A");
lire(n)
pour (i<-0;i<n;i++)
  ecrire ("A[i]=");
  lire (A[i];
fin pour
ecrire("Donnez la taille du tableau B");
lire (p)
pour(i<-0;i<p;i++)
  ecrire("B[i]=");
  lire(B[i])
fin pour
q<-n;
pour (i<-0;i<p;i++)
  A[q]<-B[i];
  q=q+1;
fin pour
pour (i<-0;i<q;i++)
  ecrire("A[i]=A[i]");
fin pour

fin
*/
#include <stdio.h>
int main ()
{
  int n , i , q , p , A[100],B[50];
  printf("Donnez la taille du tableau A\n");
  scanf("%d",&n);
  for (i=0;i<n;i++)
  {
    printf("A[%d]=",i);
    scanf("%d",&A[i]);
    printf("\n");
  }
  printf("Donnez la taille du tableau B\n");
  scanf("%d",&p);
  for (i=0;i<p;i++)
  {
    printf("B[%d]=",i);
    scanf("%d",&B[i]);
    printf("\n");
  }
  q=n;
  for (i=0;i<p;i++)
  {
    A[q]=B[i];
    q=q+1;
  }
  for (i=0;i<q;i++)
  {
    printf("A[%d]=%d\n",i,A[i]);
  }
  return 0;
}
