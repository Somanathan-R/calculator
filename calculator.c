#include <stdio.h>

int main() {

  char op;
  double first, second;
  printf("Enter type of operation: ");
  scanf("%c", &op);
  printf("Enter two operands: ");
  scanf("%lf %lf", &first, &second);

  switch (op) {
    case '+':
    //to add two numbers
      printf("%.1lf + %.1lf = %.1lf", first, second, first + second);
      break;
    case '-':
    //to subttract two numbers
      printf("%.1lf - %.1lf = %.1lf", first, second, first - second);
      break;
    case '*':
    //to multiply two numbers
      printf("%.1lf * %.1lf = %.1lf", first, second, first * second);
      break;
    case '/':
    //for divide operations
      printf("%.1lf / %.1lf = %.1lf", first, second, first / second);
      break;
    // operator doesn't match 
    default:
      printf("Error!");
  }

  return 0;
}
