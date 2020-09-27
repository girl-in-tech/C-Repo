#include <stdio.h>
#include <math.h>
  int main() { 
      int foo = 0;
      for (int n=1; n<=20; n++)
      for (int i1=1; i1<n*n*n; i1+=2){
          int i =i1;
          while(foo != n*n*n && foo< n*n*n){
              foo +=i;
              i+=2;
          }
          if (foo == (n*n*n)){
              foo = foo-i;
              printf ("\n%d^3=%d", n,i);
              i=i-2;
              while (foo != 0 && foo>0){
                  foo = foo-i;
                  printf ("=%d",i);
                  i=i-2;
              }
           }
          foo=0;
      }
      return 0;
          }
