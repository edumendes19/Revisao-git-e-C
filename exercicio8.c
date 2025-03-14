//a) Qual o comportamento da função free?
//A função free() libera a memória previamente alocada dinamicamente (por malloc(), calloc(), ou realloc()). Após chamar free(), a memória é devolvida ao sistema operacional e o ponteiro se torna inválido, não podendo mais ser utilizado.

//b) Após chamar free, o ponteiro pode ser utilizado?
//Não. Após a chamada de free(), o ponteiro se torna inválido e não deve ser utilizado. Isso pode causar comportamento indefinido. A boa prática é atribuir NULL ao ponteiro após usar free() para evitar erros.

//c) O que causa vazamentos de memória?
//Vazamentos de memória ocorrem quando a memória alocada dinamicamente não é liberada corretamente. Isso pode acontecer se:

//A memória não for liberada com free().
//O ponteiro for sobrescrito antes de ser liberado.
//O ponteiro para a memória alocada for perdido sem que free() seja chamado.

//d) O que a instrução malloc retorna quando não consegue realizar a alocação?
//Quando malloc() não consegue alocar memória, ela retorna NULL. Isso geralmente acontece quando há falta de memória disponível.

//e) Explique a instrução calloc.
//A função calloc() aloca memória para um número especificado de elementos e inicializa toda essa memória com zero. Ela recebe dois parâmetros: o número de elementos e o tamanho de cada elemento.

//f) Qual a diferença entre as instruções malloc e calloc?
//malloc(): Aloca memória para um número específico de bytes, mas não inicializa a memória.
//calloc(): Aloca memória e inicializa todos os bytes com zero. Recebe dois parâmetros: o número de elementos e o tamanho de cada um.