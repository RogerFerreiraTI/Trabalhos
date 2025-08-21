#include <stdio.h>

int main() {
    // ========== DECLARAÇÃO DE VARIÁVEIS ==========
    
    // Variáveis para a Carta 1
    char codigo_carta1[4];                    // Código da carta (ex: A01)
    char nome_cidade1[50];                 // Nome da cidade
    unsigned long int populacao1;      // População da cidade
    float area1;                                     // Área em km²
    float pib1;                                       // PIB em bilhões
    int pontos_turisticos1;                    // Número de pontos turísticos
    float densidade_populacional1;     // Densidade = População / Área
    float pib_per_capita1;                     // PIB per capita = PIB / População
    float super_poder1;                        // Super Poder da carta
    
    // Variáveis para a Carta 2
    char codigo_carta2[4];                    // Código da carta (ex: B02)
    char nome_cidade2[50];                 // Nome da cidade
    unsigned long int populacao2;      // População da cidade
    float area2;                                     // Área em km²
    float pib2;                                      // PIB em bilhões
    int pontos_turisticos2;                   // Número de pontos turísticos
    float densidade_populacional2;    // Densidade = População / Área
    float pib_per_capita2;                    // PIB per capita = PIB / População
    float super_poder2;                       // Super Poder da carta
    
    // Variáveis para comparação (1 = Carta 1 vence, 0 = Carta 2 vence)
    int vence_populacao;
    int vence_area;
    int vence_pib;
    int vence_pontos_turisticos;
    int vence_densidade;                      // ATENÇÃO: menor densidade vence!
    int vence_pib_per_capita;
    int vence_super_poder;
    
    // ========== APRESENTAÇÃO DO PROGRAMA ==========
    printf("=== SUPER TRUNFO - PAÍSES ===\n");
    printf("Bem-vindo ao sistema de cadastro e comparação de cartas!\n");
    printf("Você irá cadastrar duas cartas de cidades para comparar.\n\n");
    
    // ========== CADASTRO DA CARTA 1 ==========
    printf("--- CADASTRO DA CARTA 1 ---\n");
    printf("Digite o código da carta (ex: A01): ");
    scanf("%s", codigo_carta1);
    
    printf("Digite o nome da cidade: ");
    scanf(" %49[^\n]", nome_cidade1);  // Lê até 49 caracteres incluindo espaços
    
    printf("Digite a população: ");
    scanf("%lu", &populacao1);
    
    printf("Digite a área (em km²): ");
    scanf("%f", &area1);
    
    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib1);
    
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);
    
    // ========== CÁLCULOS AUTOMÁTICOS DA CARTA 1 ==========
    // Densidade populacional: quantas pessoas vivem em cada km² (habitantes por quilômetro quadrado)
    densidade_populacional1 = (float)populacao1 / area1;
    pib_per_capita1 = pib1 / ((float)populacao1 / 1000000000.0); // Convertendo para per capita em bilhões
    
    // Cálculo do Super Poder: soma de todos os atributos com densidade invertida
    super_poder1 = (float)populacao1 + area1 + pib1 + (float)pontos_turisticos1 + 
                   (1.0 / densidade_populacional1) + pib_per_capita1;
    
    printf("\n");
    
    // ========== CADASTRO DA CARTA 2 ==========
    printf("--- CADASTRO DA CARTA 2 ---\n");
    printf("Digite o código da carta (ex: B02): ");
    scanf("%s", codigo_carta2);
    
    printf("Digite o nome da cidade: ");
    scanf(" %49[^\n]", nome_cidade2);  // Lê até 49 caracteres incluindo espaços
    
    printf("Digite a população: ");
    scanf("%lu", &populacao2);
    
    printf("Digite a área (em km²): ");
    scanf("%f", &area2);
    
    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib2);
    
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);
    
    // ========== CÁLCULOS AUTOMÁTICOS DA CARTA 2 ==========
    // Densidade populacional: quantas pessoas vivem em cada km² (habitantes por quilômetro quadrado)
    densidade_populacional2 = (float)populacao2 / area2;
    pib_per_capita2 = pib2 / ((float)populacao2 / 1000000000.0); // Convertendo para per capita em bilhões
    
    // Cálculo do Super Poder: soma de todos os atributos com densidade invertida
    super_poder2 = (float)populacao2 + area2 + pib2 + (float)pontos_turisticos2 + 
                   (1.0 / densidade_populacional2) + pib_per_capita2;
    
    printf("\n");
    
    // ========== EXIBIÇÃO DOS DADOS CADASTRADOS ==========
    printf("=== DADOS DAS CARTAS CADASTRADAS ===\n\n");
    
    // Exibindo dados da Carta 1
    printf("--- CARTA 1: %s - %s ---\n", codigo_carta1, nome_cidade1);
    printf("População: %lu habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.1f hab/km²\n", densidade_populacional1);
    printf("PIB per Capita: %.2f\n", pib_per_capita1);
    printf("Super Poder: %.2f\n\n", super_poder1);
    
    // Exibindo dados da Carta 2
    printf("--- CARTA 2: %s - %s ---\n", codigo_carta2, nome_cidade2);
    printf("População: %lu habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.1f hab/km²\n", densidade_populacional2);
    printf("PIB per Capita: %.2f\n", pib_per_capita2);
    printf("Super Poder: %.2f\n\n", super_poder2);
    
    // ========== SISTEMA DE COMPARAÇÃO ==========
    printf("=== COMPARAÇÃO ENTRE AS CARTAS ===\n");
    printf("(1 = Carta 1 vence, 0 = Carta 2 vence)\n\n");
    
    // Comparação da População (maior vence)
    vence_populacao = (populacao1 > populacao2) ? 1 : 0;
    printf("População: %d\n", vence_populacao);
    
    // Comparação da Área (maior vence)
    vence_area = (area1 > area2) ? 1 : 0;
    printf("Área: %d\n", vence_area);
    
    // Comparação do PIB (maior vence)
    vence_pib = (pib1 > pib2) ? 1 : 0;
    printf("PIB: %d\n", vence_pib);
    
    // Comparação dos Pontos Turísticos (maior vence)
    vence_pontos_turisticos = (pontos_turisticos1 > pontos_turisticos2) ? 1 : 0;
    printf("Pontos Turísticos: %d\n", vence_pontos_turisticos);
    
    // Comparação da Densidade Populacional (MENOR vence - mais eficiente)
    vence_densidade = (densidade_populacional1 < densidade_populacional2) ? 1 : 0;
    printf("Densidade Populacional: %d\n", vence_densidade);
    
    // Comparação do PIB per Capita (maior vence)
    vence_pib_per_capita = (pib_per_capita1 > pib_per_capita2) ? 1 : 0;
    printf("PIB per Capita: %d\n", vence_pib_per_capita);
    
    // Comparação do Super Poder (maior vence)
    vence_super_poder = (super_poder1 > super_poder2) ? 1 : 0;
    printf("Super Poder: %d\n\n", vence_super_poder);
    
    // ========== RESULTADO FINAL ==========
    printf("=== RESULTADO FINAL ===\n");
    if (vence_super_poder == 1) {
        printf("🏆 CARTA VENCEDORA: Carta 1 (%s - %s)\n", codigo_carta1, nome_cidade1);
        printf("Super Poder: %.2f\n", super_poder1);
    } else {
        printf("🏆 CARTA VENCEDORA: Carta 2 (%s - %s)\n", codigo_carta2, nome_cidade2);
        printf("Super Poder: %.2f\n", super_poder2);
    }
    
    printf("\nObrigado por jogar Super Trunfo - Países!\n");
    printf("Desenvolvido por Roger Ferreira\n");
    
    return 0;
}