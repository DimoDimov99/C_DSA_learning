#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

double calculator(double first_num, char *operation, double second_num) {
  double result = 0;
  switch (*operation) {
  case '+':
    result = first_num + second_num;
    break;
  case '-':
    result = first_num - second_num;
    break;
    // when providng * should be instead '*', so i replace * with x for now
  case 'x':
    result = first_num * second_num;
    break;
  case '/':
    result = first_num / second_num;
    break;
  default:
    printf("Invalid operation!\n");
    exit(1);
  }

  return result;
}

int main(int argc, char *argv[]) {
  if (argc != 4) {
    printf("Usage: ./calculator <val1> <operation> <val2>\n");
    return 1;
  }

  // handle later, for now cheap trick to handle non digit input
  // I mean who would provide 0 as input argument to calculator on purpose? :D
  if (atoi(argv[1]) == 0 || atoi(argv[3]) == 0) {
    printf("Invalid value for either first or second digit!\n");
    return 1;
  }

  double calc = calculator(atof(argv[1]), argv[2], atoi(argv[3]));
  printf("%.2f\n", calc);
  return 0;
}
