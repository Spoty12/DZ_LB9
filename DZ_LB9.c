
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "RUS");

    char symbol;
    int height, width;
    int i, j;
    int answer;

    do
    {
        printf("Введите символ из которого будет строиться фигура: ");
        scanf(" %c", &symbol);

        printf("Введите высоту: ");
        scanf("%d", &height);

        printf("Введите ширину: ");
        scanf("%d", &width);

        printf("Пустой прямоугольник внутри:\n");

        for (i = 1; i <= height; i++)
        {
            for (j = 1; j <= width; j++)
            {
                if (i == 1 || i == height ||
                    j == 1 || j == width)
                {
                    printf("%c", symbol);
                }
                else
                {
                    printf(" ");
                }
            }

            printf("\n");
        }

        printf("\nПродолжить? (Да - любое число, Нет - 0): ");
        scanf("%d", &answer);

    } while (answer != 0);

    printf("Программа завершена.\n");

    return 0;
}
