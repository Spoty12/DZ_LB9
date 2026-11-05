
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <math.h>

// Вычисление площади треугольника
double area_triangle(double a)
{
    return a * a / 2;
}

// Вывод определения фигуры
void definition()
{
    printf("\nПеревернутый прямоугольный равнобедренный треугольник.\n");
    printf("Углы при основании равны 45 градусов.\n");
    printf("Катеты равны между собой.\n");
    printf("На экране отображается только контур.\n");
}

// Рисование треугольника
void draw_triangle(char symbol, int h)
{
    int width = 2 * h - 1;

    for (int i = 0; i < h; i++)
    {
        if (i == 0)
        {
            for (int j = 0; j < width; j++)
                printf("%c", symbol);
        }
        else if (i == h - 1)
        {
            for (int j = 0; j < h - 1; j++)
                printf(" ");

            printf("%c", symbol);
        }
        else
        {
            for (int j = 0; j < i; j++)
                printf(" ");

            printf("%c", symbol);

            for (int j = 0; j < width - 2 * i - 2; j++)
                printf(" ");

            printf("%c", symbol);
        }

        printf("\n");
    }
}

int main()
{
    setlocale(LC_ALL, "RUS");

    int choice, h;
    double a;
    char symbol;

    printf("Введите длину катета a: ");
    scanf("%lf", &a);

    printf("\nМеню:\n");
    printf("1. Рассчитать площадь\n");
    printf("2. Вывести определение фигуры\n");
    printf("3. Нарисовать фигуру\n");
    printf("Выберите действие: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("Площадь треугольника = %.2lf\n",
            area_triangle(a));
        break;

    case 2:
        definition();
        break;

    case 3:
        printf("Введите символ для рисования: ");
        scanf(" %c", &symbol);

        printf("Введите высоту фигуры в символах: ");
        scanf("%d", &h);

        if (h < 2)
        {
            printf("Высота должна быть не меньше 2.\n");
        }
        else
        {
            draw_triangle(symbol, h);
        }
        break;

    default:
        printf("Неверный пункт меню.\n");
    }

    return 0;
}

