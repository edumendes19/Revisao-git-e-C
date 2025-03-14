#include <stdio.h>

 int main() {
 int a = 1, b = 2, c = 3, d = 4, e = 5;
 printf("a * b / c = %.3f\n", (float)a * b / c);
 printf("a * b %% c + 1 = %d\n", a * b % c + 1);
 printf("++a * b - c-- = %d\n", ++a * b - c--);
 printf("7 - - b * ++d = %d\n", 7 - - b * ++d);
 printf("a / b / c = %.3f\n", (float)a / b / c);
 printf("7 + c * --d / e = %.3f\n", 7 + c * --d / (float)e);
 printf("2 * a %% - b + c + 1 = %d\n", 2 * a % - b + c + 1);
 printf("39 / - ++e - + 29 %% c = %.3f\n", 39.0 / - ++e - + 29 % c);
 printf("7 - + ++a %% (3+b) = %d\n", 7 - + ++a % (3+b));

 return 0;

 }


// Linha 5: a * b / c

//(float)a converte a = 1 para 1.0.
//1.0 * 2 = 2.0. /2.0 / 3 = 0.667 (divisão real)/ Saída: 0.667.

//Linha 6: a * b % c + 1

//a * b = 1 * 2 = 2. / 2 % 3 = 2 (resto da divisão)./2 + 1 = 3.
//Saída: 3.

//Linha 7: ++a * b - c--

//++a incrementa a antes da operação: a = 2.
//c-- usa c = 3 na operação e depois decrementa (c = 2).
//12 * 2 = 4. / 4 - 3 = 1.
//Saída: 1

//Linha 8: 7 - - b * ++d

//++d incrementa d antes: d = 5.
//-b inverte b = 2 para -2./ -2 * 5 = -10. / 7 - (-10) = 7 + 10 = 17.
//Saída: 17.

//Linha 9: a / b / c


//(float)a converte a = 2 para 2.0.
//2.0 / 2 = 1.0./ 1.0 / 2 = 0.500.
//Saída: 0.500.


//Linha 10: 7 + c * --d / e

//d decrementa d antes: d = 4.
//c * d = 2 * 4 = 8. / 8 / 5.0 = 1.6. / 7 + 1.6 = 8.600.
//Saída: 8.600.

//Linha 11: 2 * a % - b + c + 1

//2 * a = 2 * 2 = 4. / 4 % -2 = 0. / 0 + 2 + 1 = 3.
//Saída: 3.

//Linha 12: 39 / - ++e - + 29 % c


//++e incrementa e antes: e = 6.
//39.0 / -6 = -6.5. / 29 % c = 29 % 2 = 1. /-6.5 - 1 = -7.500.
//Saída: -7.500.

//Linha 13: 7 - + ++a % (3+b)

//++a incrementa a: a = 3.
//3 + b = 3 + 2 = 5. / 3 % 5 = 3. / 7 - 3 = 4.
//Saída: 4.