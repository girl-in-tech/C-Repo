#include <stdio.h>
#include <stdio.h>
#include <math.h>

int main()
{
    float  a,b,c,x,F;
    //("Introdu 4 numere reale: ");
printf ("Introdu a:");
scanf ("%f", &a);
printf ("Introdu b:");
scanf ("%f", &b);
printf ("Introdu c:");
printf ("Introdu x:");
scanf ("%f", &x);
 printf ("Cazul 1");
if ((x+c)<0 && c!= 0)
    F = ((x*c)-b) / cos(x);
printf ("Cazul 2");
else if ((x+b)>0 || c!= 0)
     F = (x-log(b))/ (a*x+pow(c,2)+2);
 printf ("Cazul 3");
else
F = (a + sin(b)+x) / pow(x,2);
printf ("F=%f",F);
  
return 0;

}

