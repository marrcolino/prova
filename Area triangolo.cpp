//Macchia Marco 3A 09/10/2013
#include <stdio.h>
#include <stdlib.h>
int main(){
 //input
 int b,h,p,a;
 
 printf ("Digita il valore della base:");
 scanf ("%d",&b);
 printf ("Digita il valore dell'altezza:");
 scanf ("%d",&h);   
 p= b*h;
 a= p/2;
 //risultato
 printf ("L'area e' %d\n",a);
 
 system ("PAUSE");
 return 0;
}
 