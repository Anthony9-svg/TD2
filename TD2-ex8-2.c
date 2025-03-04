#include <stdio.h>
int main ()
{
  int i , n , tab[50] , a , max , min  ;
  printf("Donnez la taille du tableau");
  scanf("%d",&n);
  for (i=0;i<n;i++)
  {
    printf("T[%d]=",i);
    scanf("%d",&tab[i]);
  }
  max=tab[0];
   for (i=1;i<n;i++)
   {
       if (max<tab[i])
       {
           max=tab[i];      
           a=i;
       }      
   }
   printf("Le maximum est T[%d]=%d\n",a,max);
   min=tab[0];
   for (i=1;i<n;i++)
   {
       if (min>tab[i])
       {
           min=tab[i];      
           a=i;
       }      
   }
   printf("Le minimum est T[%d]=%d\n",a,min);
   return 0;
}

