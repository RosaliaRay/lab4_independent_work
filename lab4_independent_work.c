/*
    Студент: Мареева Ангелина Ильинична 
    Группа: ПИ 11 
    Назначение: Конвертер величин
*/

#include <stdio.h>

int main(void)
{
    double value;
    double result;
    int choice;

    printf("Введите значение: ");
    if (scanf("%if", &value) != 1) {
        printf("Ошибка: значение должно быть числом. \n");
        return 1;
    }

    printf("\nМеню:\n");
    printf("\n1 - метры в сантиметры\n");
    printf("\n2 - киллограммы в граммы\n");
    printf("\n3 - градусы Цельсия в градусы Фаренгейта\n");
    printf("\n4 - часы в минуты\n");
    printf("\nВыберите операцию\n");

    if (scanf("%d", &choice) != 1) {
        printf("\nОшибка: команда должна быть числом\n");
        return 1;
    }

    if ((choice == 1 || choice == 2 || choice == 4) && value < 0.0) {
        printf("\nОшибка: для выбранной операции значение не может быть отрицательным\n");
        return 1;
    }

    switch (choice) {
        case 1:
            result = value * 100.0;
            printf("\nРезультат: %.2f см\n", result);
            break;

        case 2:
            result = value * 1000.0;
            printf("\nРезультат: %.2f г\n", result);
            break;

        case 3:
            result = value * 9.0 / 5.0 + 32.0;
            printf("\nРезультат: %.2f F\n", result);
            break;

        case 4:
            result = value * 60.0;
            printf("\nРезультат: %.2f мин\n", result);
            break;

        default:
            printf("\nОшибка: неизвестная команда\n", result);
            return 1;
    }
    return 0;
}