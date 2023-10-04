#include <stdio.h>

int main(int argc, char const *argv[])
{
    int option, firstNumber, secondNumber, conclucion;
    do
    {
        printf("===Please select a operation type===\n");
        printf("1. Aggregation\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");
        scanf("%d", &option);

        if(option==5) {
            break;
        }
        //Get the numbers
        printf("\nPlease enter the first number: \n");
        scanf("%d", &firstNumber);

        printf("\nPlease enter the second number: \n");
        scanf("%d", &secondNumber);

        //Operation
        switch (option)
        {
        case 1:
            conclucion = firstNumber + secondNumber;
            break;
        case 2:
            conclucion = firstNumber - secondNumber;
            break;
        case 3:
            conclucion = firstNumber * secondNumber;
            break;
        case 4:
            conclucion = firstNumber / secondNumber;
            break;
        }

        //Response:
        printf("----------------\n");
        printf("Conclucion: %d\n", conclucion);
        printf("----------------\n\n\n");

    } while (option > 0 && option < 5);
    
    return 0;
}
