// Online C compiler to run C program online
#include <stdio.h>

int main() {
float valor;
printf ("digite o valor da compra:\n");
scanf ("%f", &valor);

if (valor > 100) {
    printf ("possui desconto");
}
else {
    printf ("nao possui desconto");
}
    return 0;
}
