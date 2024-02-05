#include <stdio.h>

int addition(int num1, int num2) {
  int result = num1 + num2;
  printf("%d\n", result);
}

int subtraction(int num1, int num2) {
  int result = num1 - num2;
  printf("%d\n", result);
}

int multiplication(int num1, int num2) {
  int result = num1 * num2;
  printf("%d\n", result);
}

int division(int num1, int num2) {
  if (num2 == 0) {
    printf("Cannot divide by 0!\n");
  }
  else {
    int result = num1 / num2;
    printf("%d\n", result);
  }
}

int modulo(int num1, int num2) {
  int result = num1 % num2;
  printf("%d\n", result);
}

int main() {
  int num1, num2;
  char operation;

  while (1) {

  printf("Input your first number:\n");
  scanf("%d", &num1);

  printf("Pick from the following operations: + - * / %% :\n");
  scanf(" %c", &operation);

  printf("Input your second number:\n");
  scanf("%d", &num2);

  switch (operation) {
    case '+':
      addition(num1, num2);
      break;

    case '-':
      subtraction(num1, num2);
      break;

    case '*':
      multiplication(num1, num2);
      break;

    case '/':
      division(num1, num2);
      break;

    case '%':
      modulo(num1, num2);
      break;

    default:
      printf("Invalid Choice!");
      break;
    }

  }

  return 0;
}