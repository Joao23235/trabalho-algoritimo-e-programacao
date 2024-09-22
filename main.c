#include<stdio.h>
#include<math.h>
#include<string.h>
#include"func_val.h"

int main() {
    char mensagem[101];
    char hexadecimal[3];
    int i, j, b, verificacao, x = 1, numerocasos;
    char resultado;
    char fim[] = "00";
    
    printf("Digite o numero de casos: ");
    scanf("%d", &numerocasos);
    
    for(j = 0; j < numerocasos; j++) {
        printf("Digite o valor de b: ");
        scanf("%d", &b);

        printf("Digite a mensagem: ");
        scanf("%100s", &mensagem);
        
        printf("\n");
    
        for(i = 0; i < strlen(mensagem); i += 2) {
            x = i / 2 + 1;
            verificacao = func_val(x, b);
            if(verificacao != 0) {
                hexadecimal[0] = mensagem[i];
                hexadecimal[1] = mensagem[i + 1];
                hexadecimal[2] = '\0';
                if(strcmp(hexadecimal, fim) == 0) {
            	    break;
		}
            resultado = strtol(hex, NULL, 16);
            printf("%c", resultado);
            }
        }
        printf("\n\n\n");
    }

    return 0;
}
