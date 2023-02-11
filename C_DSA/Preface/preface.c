#include <stdio.h>
#include <stdlib.h>

typedef struct Rectangle {
  int lenght;
  int breadth;
} Rectangle;

int area(Rectangle r1) {
  // r1.lenght++;
  // ++r1.lenght;
  return r1.lenght * r1.breadth;
}

int add(int a, int b) {
  int c;
  c = a + b;
  return c;
}

int main(void) {
  /*
int A[5];
A[0] = 27;
A[1] = 10;

int B[5] = {2, 9, 6, 8, 10};
// This way of declaring an array (static declarating) it will be created on
// the stack

*
 * Main Memory
 * Heap
 * Stack -> A[5], B[5] ...
 * code section main()

for (int i = 0; i < 5; i++) {
  printf("%d\n", B[i]);
}*/

  // Pointer

  // Data Variable
  // int a = 10;
  // Address Variable
  // int *p;
  // p = &a;
  // printf("%d\n", a);
  // Dereferencing
  // printf("%d\n", *p);
  // dynamic allocation (HEAP)
  /* int *p2;
  p = (int *)malloc(5 * sizeof(int));
  free(p);
  */

  // Pointer to struct
  /*
  Rectangle *p3;
  p3 = (Rectangle *)malloc(sizeof(Rectangle));
  p3->lenght = 5;
  p3->breadth = 10;
  printf("lenght: %d,breadth: %d\n", p3->lenght, p3->breadth);
  free(p3);
  */

  /*
    int x, y, z;
    x = 10;
    y = 5;
    z = add(x, y);
    printf("Sum is: %d\n", z);
    */

  Rectangle r4 = {10, 5};
  int rectangle_area = area(r4);
  printf("%d\n", rectangle_area);
  return 0;
}
