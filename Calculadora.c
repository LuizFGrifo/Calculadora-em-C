#include <stdio.h>
#include <locale.h>

void limpar_entrada()
{
    char c;
    while ((c = getchar()) != '\n' && c != EOF)
    {
    }
}

int main()
{

    setlocale(LC_ALL, "portuguese");
    double num1, num2, result;
    char option;

    printf("********** Bem vindo(a) a calculadora **********\n\n");
    printf("Digite o primeiro n�mero: ");
    scanf("%lf", &num1);
    printf("Digite o segundo n�mero: ");
    scanf("%lf", &num2);

    printf("Escolha entre as opera��es (+ - * /): ");
    limpar_entrada(); // Se houver uma quebra de linha pendente na esntrada padr�o, � preciso limpar antes.
    scanf("%c", &option);
    switch (option)
    {
    case '+':
        result = num1 + num2;
        printf("O resultado da soma �: %.2lf \n", result);
        break;

    case '-':
        result = num1 - num2;
        printf("O resultado da subtra��o �: %.2lf \n", result);
        break;

    case '*':
    case 'X':
    case 'x':
        result = num1 * num2;
        printf("O resultado da multiplica��o �: %.2lf \n", result);
        break;
    case '/':
        if (num1 == 0)
        {
            printf("O valor n�o pode ser igual a 0");
        }
        else
        {
            result = num1 / num2;
            printf("O resultado da divis�o: %.2lf \n", result);
        }
        break;
    default:
        printf("ERRO no programa !!");
        break;
    }

    return 0;
}