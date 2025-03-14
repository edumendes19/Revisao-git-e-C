#include <stdio.h>

 int main() {
 int y = 5;
 int z = 11;
 int w;
 w = y + z;
 if (y > z) {
 w = y * z;
 }
 printf("%d", w);
 return 0;
 }

 //O código atribui w = 5 + 11 = 16. Como 5 > 11 é falso, o if não altera w.
//Valor final de w: 1