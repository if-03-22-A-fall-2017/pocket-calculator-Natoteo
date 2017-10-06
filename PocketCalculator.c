#include <stdio.h>

void display_menu();
void get_operands();
void perform_operation();

int main(int argc, char *argv[])
{
    int operation = 0;
    while(operation != -1)
    {
      display_menu();
      scanf("%d", &operation);
      if(operation != -1)
      {
        while(operation > 4 && operation < 1 && operation != 0)
        {
          printf("Input not allowed, please try again");
          scanf("%d", &operation);
        }

        double firstNr = 0;
        double secondNr = 0;
        get_operands(&firstNr, &secondNr);
        perform_operation(operation, firstNr, secondNr);
      }
    }
    return 0;
}
void display_menu()
{
  printf("\nChose one of the following operations:\n Add (1)\n Subtract (2)\n Multiply (3)\n Divide (4)\n Stop program (-1)\n");
  printf("Your number: ");
}
void get_operands(double *firstNr, double *secondNr)
{
  printf("Please enter the first Number:");
  scanf("%lf", firstNr);
  printf("Please enter the second Number:");
  scanf("%lf", secondNr);
}
void perform_operation(int number, double firstNr, double secondNr)
{
  switch(number)
  {
    case 1:
    printf("\nErgebnis: %lf\n", (firstNr+secondNr));
    break;
    case 2:
    printf("\nErgebnis: %lf\n", (firstNr-secondNr));
    break;
    case 3:
    printf("\nErgebnis: %lf\n", (firstNr*secondNr));
    break;
    case 4:
    if(secondNr != 0)
      printf("\nErgebnis: %lf\n", (firstNr/secondNr));
    else
      printf("Division by Zero");
    break;

  }
}