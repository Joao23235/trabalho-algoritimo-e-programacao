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
    
    for(j = 0; j < numerocasos; j++) {   //O programa entra em um loop que se repete 'numerocasos' vezes. Cada iteração do loop processa uma mensagem diferente.
        printf("Digite o valor de b: ");
        scanf("%d", &b);

        printf("Digite a mensagem: ");
        scanf("%100s", &mensagem);
        
        printf("\n");
    
        for(i = 0; i < strlen(mensagem); i += 2) {  //Repete pela string em passos de 2 caracteres (ou seja, processa cada par de caracteres).
            x = i / 2 + 1;   // Calcula o valor de 'x'(posição atual do caractere) com base no índice de repetição atual 'i'.
            verificacao = func_val(x, b);
            if(verificacao != 0) {  //Se verificacao for diferente de zero, ela extrai o par de caracteres atual da mensagem e armazena na string hexadecimal.
                hexadecimal[0] = mensagem[i];
                hexadecimal[1] = mensagem[i + 1];
                hexadecimal[2] = '\0';
                if(strcmp(hexadecimal, fim) == 0) {  //Verifica se o par extraído é igual à "00", se for, o loop é terminado.
            	    break;
		}
            resultado = strtol(hex, NULL, 16);  //Converte o par extraído de hexadecimal para um inteiro.
            printf("%c", resultado);  //Imprime o caractere correspondente ao inteiro convertido na tabela ASCII.
            }
        }
        printf("\n\n\n");
    }

    return 0;
}
