#include <stdio.h>
#include "myfunc.h"

int main(void){
 double a;
 double b;
 double c;
 double kor;
 int i;
 int e;
  do {
    e = scanf("%lf %lf %lf",&a, &b, &c);
 } while (e != 3);
    for (i = 0; i < 2;i++) {
      /*  if ((a == 0.0 && b == 0.0) || (b * b - 4 * a * c) < 0){
            printf ("\n");
            break;
        }*/
        kor = fun(a,b,c,i);
        printf ("x%d = %lf ",i+1, kor);
        if(a == 0.0 || (b * b - 4 * a * c) == 0.0){
            printf ("\n");
            break;
        }
        if (i == 1) printf ("\n");
    }

    return myfunc(2);
}
