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

	//O programa entra em um loop que se repete 'numerocasos' vezes. Cada iteração do loop processa uma mensagem diferente.
        for(j = 0; j < numerocasos; j++) {  
        printf("Digite o valor de b: ");
        scanf("%d", &b);

        printf("Digite a mensagem: ");
        scanf("%100s", &mensagem);
        
        printf("\n");

	//Repete pela string em passos de 2 caracteres (ou seja, processa cada par de caracteres).
        for(i = 0; i < strlen(mensagem); i += 2) { 
		
	    // Calcula o valor de 'x'(posição atual do caractere) com base no índice de repetição atual 'i'.	
            x = i / 2 + 1;  
            verificacao = func_val(x, b);
		
	    //Se verificacao for diferente de zero, ela extrai o par de caracteres atual da mensagem e armazena na string hexadecimal.	
            if(verificacao != 0) { 
                hexadecimal[0] = mensagem[i];
                hexadecimal[1] = mensagem[i + 1];
                hexadecimal[2] = '\0';

		//Verifica se o par extraído é igual à "00", se for, o loop é terminado.
                if(strcmp(hexadecimal, fim) == 0) {  
            	    break;
		}
		    
	    //Converte o par extraído de hexadecimal para um inteiro.
            resultado = strtol(hex, NULL, 16);  

	    //Imprime o caractere correspondente ao inteiro convertido na tabela ASCII. 
            printf("%c", resultado);  
            }
        }
        printf("\n\n\n");
    }

    return 0;
}
