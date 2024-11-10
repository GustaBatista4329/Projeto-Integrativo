#include <stdio.h>
#include <string.h>

#define MAX_ETAPAS 9  // Número de etapas do projeto InClass

// Função para exibir o progresso geral do projeto
void exibir_progresso(int progresso[], char *etapas[]) {
    printf("\nProgresso atual do projeto:\n");
    for (int i = 0; i < MAX_ETAPAS; i++) {
        printf("%s: %d%% concluido\n", etapas[i], progresso[i]);
    }
}

int main() {
    // Definindo as etapas do projeto InClass
    char *etapas[MAX_ETAPAS] = {
        "Planejamento",
        "Selecao de Tecnologia",
        "Design de Software",
        "Desenvolvimento e Implementacao",
        "Testes",
        "Tratamento de Privacidade e Seguranca",
        "Obtencao de Consentimento",
        "Lancamento Gradual",
        "Avaliacao Contínua e Melhorias"
    };

    // Array para armazenar o progresso de cada etapa
    int progresso[MAX_ETAPAS] = {0};
    int etapa_concluida;

    // Loop para atualizar o progresso em cada etapa
    for (int i = 0; i < MAX_ETAPAS; i++) {
        while (progresso[i] < 100) {
            exibir_progresso(progresso, etapas);

            printf("\nDigite o progresso atual para a etapa '%s' (0-100): ", etapas[i]);
            int novo_progresso;
            scanf("%d", &novo_progresso);

            // Verifica se o valor inserido está entre 0 e 100
            if (novo_progresso >= 0 && novo_progresso <= 100) {
                progresso[i] = novo_progresso;

                // Verifica se a etapa foi concluída
                if (progresso[i] == 100) {
                    printf("Etapa '%s' concluida!\n", etapas[i]);
                }
            } else {
                printf("Progresso invalido! Por favor, insira um valor entre 0 e 100.\n");
            }
        }
    }

    // Quando todas as etapas estão concluídas
    printf("\nTodas as etapas foram concluidas! O projeto esta feito.\n");

    return 0;
}
