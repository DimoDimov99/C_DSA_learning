#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Person {
  char *name;
  int age;
  int height;
  int weight;
};

struct Person *Person_create(char *name, int age, int height, int weight) {
  struct Person *p = malloc(sizeof(struct Person));
  assert(p != NULL);

  p->name = strdup(name);
  p->age = age;
  p->height = height;
  p->weight = weight;

  return p;
}

void Person_destroy(struct Person *p) {
  assert(p != NULL);
  free(p->name);
  free(p);
}

void Person_print(struct Person *p) {
  printf("Name: %s\n", p->name);
  printf("Age: %d\n", p->age);
  printf("Height: %d\n", p->height);
  printf("Weight: %d\n", p->weight);
}

int main(int argc, char *argv[]) {
  struct Person *dimo = Person_create("Dimo Dimov", 23, 171, 101);
  Person_print(dimo);
  Person_destroy(dimo);
  return 0;
}
