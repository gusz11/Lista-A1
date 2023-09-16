#include <stdio.h>

int main(void)
{
    int valor;
    int olimpicos = 1896;
    int copa = 1930;

    printf("Digite um ano entre 1800 e 2022:\n");
    scanf("%d", &valor);

    while (!(valor >= 1800 && valor <= 2022))
    {
        printf("Tente novamente:\n");
        scanf("%d", &valor);
    }

    int encontrou = 0;

    while (olimpicos <= valor || copa <= valor)
    {

        if (valor == olimpicos)
        {
            printf("Os Jogos Olimpicos de Verao ocorreram no ano de %d.", valor);
            encontrou++;
        }

        else if (valor == copa)
        {
            printf("A Copa do Mundo de Futebol ocorreu no ano de %d.", valor);
            encontrou++;
        }
        olimpicos += 4;
        copa += 4;
    }

    if (!encontrou)
    {
        printf("Nao houve Jogos Olimpicos de Verao ou Copa do Mundo no ano de %d.", valor);
    }

    return 0;
}