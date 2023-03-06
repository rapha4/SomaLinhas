#include <stdio.h>
#include <stdlib.h>

int main() {


    // Declarando variáveis
    int n, m;

    printf("Qual a quantidade de linhas da matriz? ");
    scanf("%d", &n);
    printf("Qual a quantidade de colunas da matriz? ");
    scanf("%d", &m);

    int a[n][m];
    int s[n];


    // Lendo input do vetor principal
    for (int i = 0; i < n; i++) {
        printf("Digite os elementos da %da linha: \n", i+1);
        for (int j = 0; j < m; j++) {
        scanf("%d", &a[i][j]);
        }
    }


    // Armazenando o valor da soma das linhas no segundo vetor
    for (int i = 0; i < n; i++) {
        s[i] = 0;
        for (int j = 0; j < m; j++) {
            s[i] = s[i] + a[i][j];
        }
    }

    // Output
    printf("Valores Gerados: \n");
    for (int i = 0; i < n; i++) {
        printf("%d\n", s[i]);
    }

    return 0;
}
