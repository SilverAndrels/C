#include <stdio.h>
#include <windows.h>

int main()
{
    int option;
    float c, f;

    printf("Wich convertion you want to do ?\n1 - C to F\n2 - F to C\n");
    scanf("%d", &option);

    if (option == 1)
    {
        system("cls");
        printf("Insert the degrees: ");
        scanf("%f", &c);
        f = (c * 1.8) + 32;
        printf("The result is: %.2f Fahrenheit degrees", f);
        Sleep(2000);
    }
    else if (option == 2)
    {
        system("cls");
        printf("Insert the degrees: ");
        scanf("%f", &f);
        c = (f - 32) / 1.8;
        printf("The result is: %.2f Celsius degrees", c);
        Sleep(2000);
    }

    return 0;
}
