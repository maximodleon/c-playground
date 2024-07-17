#include <stdio.h>
#include <stdbool.h>

#define MAX_EMPLOYEES 10

struct employee_t {
  int id;
  char firstname[64];
  char lastname[64];
  float income;
  bool ismanager;
};

int main() {
  struct employee_t employees[MAX_EMPLOYEES];

  int i = 0;
  for (i = 0; i < MAX_EMPLOYEES; i++) {
    employees[i].income = i * 10;
    employees[i].ismanager = false;
  }

  printf("%f\n", employees[1].income);
}
