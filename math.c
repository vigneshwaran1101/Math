#include <stdio.h>

int main()
{
    int choice;
    float value, result;
    float a, b;

    printf("===== MATHEMATICS TOOLKIT =====\n");
    printf("1. Calculator\n");
    printf("2. Metre to Centimetre\n");
    printf("3. Centimetre to Metre\n");
    printf("4. Kilometre to Metre\n");
    printf("5. Metre to Kilometre\n");
    printf("6. Exit\n");

    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("\nEnter two numbers: ");
            scanf("%f %f", &a, &b);

            printf("Addition = %.2f\n", a + b);
            printf("Subtraction = %.2f\n", a - b);
            printf("Multiplication = %.2f\n", a * b);

            if(b != 0)
                printf("Division = %.2f\n", a / b);
            else
                printf("Division by zero is not possible.\n");

            break;

        case 2:
            printf("Enter value in metres: ");
            scanf("%f", &value);

            result = value * 100;

            printf("%.2f m = %.2f cm\n", value, result);
            break;

        case 3:
            printf("Enter value in centimetres: ");
            scanf("%f", &value);

            result = value / 100;

            printf("%.2f cm = %.2f m\n", value, result);
            break;

        case 4:
            printf("Enter value in kilometres: ");
            scanf("%f", &value);

            result = value * 1000;

            printf("%.2f km = %.2f m\n", value, result);
            break;

        case 5:
            printf("Enter value in metres: ");
            scanf("%f", &value);

            result = value / 1000;

            printf("%.2f m = %.2f km\n", value, result);
            break;

        case 6:
            printf("Thank you!\n");
            break;

        default:
            printf("Invalid choice.\n");
    }

    return 0;
}       