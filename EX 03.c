// Online C compiler to run C program online
#include <stdio.h>

int main() {
int nota;
printf ("Digite sua nota:\n");
scanf ("%d", &nota);

if (nota >= 7) {
    printf ("aprovado");
} else if (nota >= 5) {
    printf ("ficou de recuperação");
} else {
    printf ("reprovado");
}

    return 0;
}
