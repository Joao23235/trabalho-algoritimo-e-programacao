#include <stdio.h>

int main() {
    float N1, N2, PPD,N3,EU_nota,media = 0, menorNota,Nmedia;
    int tentativas = 0,fez_EU,fez_N3;

    printf("Calcule a nota do semestre\n");

    // Loop para N1
    do {
        printf("Sua nota da N1(0 a 4.5):");
        scanf("%f", &N1);
        tentativas++;
    } while ((N1 < 0 || N1 > 4.5) && tentativas < 3);

    // Reiniciar o contador de tentativas para as outras notas
    tentativas = 0;

    // Loop para N2
    do {
        printf("Sua nota da N2(0 a 4.5):");
        scanf("%f", &N2);
        tentativas++;
    } while ((N2 < 0 || N2 > 4.5) && tentativas < 3);

    // Reiniciar o contador de tentativas para a PPD
    tentativas = 0;

    // Loop para PPD
    do {
        printf("Sua nota do PPD(0 a 1.0):");
        scanf("%f", &PPD);
        tentativas++;
    } while ((PPD < 0 || PPD > 1.0) && tentativas < 3);
    // Verificar se fez o Exame Unificado
    do {
        printf("Fez o Exame Unificado? (0 - não, 1 - sim): ");
        scanf("%d", &fez_EU);
        tentativas++;
    } while (fez_EU != 0 && fez_EU != 1 && tentativas < 3);

    // Se fez o exame, solicitar a nota e adicionar à média
    if (fez_EU == 1) {
        do {
            printf("Digite a nota do Exame Unificado (0 a 1): ");
            scanf("%f", &EU_nota);
            tentativas = 0; // Reiniciar contador de tentativas
        } while (EU_nota < 0 || EU_nota > 1);

        // Ajustar o cálculo da média (você pode definir um peso para o EU)
        media = (N1 + N2 + PPD + EU_nota); // Exemplo com peso igual
    } else {
        // Calcular a média sem o EU
        media = (N1 + N2 + PPD);
    }
    
    if (media >= 7) {
        printf("aprovado!\n");
        printf("Sua media e %.1f\n", media);
    } else {
        do {
            printf("Fez a N3? (0 - não, 1 - sim): ");
            scanf("%d", &fez_N3);
            tentativas++;
        } while (fez_N3 != 0 && fez_N3 != 1 && tentativas < 3);

        if (fez_N3 == 1) {
            do {
                printf("Digite a N3 (0 a 4.5): ");
                scanf("%f", &N3);
                tentativas = 0;
            } while (N3 < 0 || N3 > 4.5);

            // Encontra a menor nota e substitui por N3 (com peso 4.5 por exemplo)
            float menorNota = N1 < N2 ? N1 : N2;
            media = media - menorNota + N3;

            printf("Sua media e %.1f\n", media);
        }
    }

    

    return 0;
}
