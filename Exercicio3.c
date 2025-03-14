#include <stdio.h>

int main() {


    int a = 5;
    int b = 11;
    float c;

    scanf("%d %d", &a, &b);


    if(a > b || !(a > 0)) {
        c = (float)(b / a);
    } else {
        c = (float)(a / b);
    }


    printf("%.2f\n", c);
    return 0;


}


// O codigo possui 4 possiveis saidas: 

//10 2 → 0.00
//3 9 → 0.00
//1 5 → 0.00
//-2 8 → -4.00