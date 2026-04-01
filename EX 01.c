#include <stdio.h>

int main() {
    int idade;
    printf ("digite sua idade:\n");
    scanf ("%d", &idade );
    
    
    if (idade >= 18) {
        printf("pode entrar\n");
    }
    else if (idade >= 16) {
        printf("pode entrar com responsável\n");
    } else {
        printf ("proíbida entrada");
    }
    
    
    return 0;
}
