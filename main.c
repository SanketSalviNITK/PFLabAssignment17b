#include <stdio.h>
#include <strings.h>
typedef struct {
  char name[20];
  char desig[20];
  char doj[10];
  char gen;
  int salary;
} Employee;

void dispEmp(Employee[]);
void selectEmp(Employee[]);
void selectEmp2(Employee[]);

int main() {
  Employee e[3];
  printf("*** Employee Program ***\n");
  for (int i = 0; i < 3; i++) {
    printf("Name:");
    scanf("%s", e[i].name);
    printf("Designation:");
    scanf("%s", e[i].desig);
    printf("DOJ:");
    scanf("%s", e[i].doj);
    printf("Gender:");
    scanf("%s", &e[i].gen);
    printf("Salary:");
    scanf("%d", &e[i].salary);
  }

  dispEmp(e);
  printf("Employee with salary more than Rs. 10,000:\n");
  selectEmp(e);
  printf("Employee with 'Asst_manager' as designation:\n");
  selectEmp2(e);
  return 0;
}

void selectEmp(Employee emp[3]) {
  for (int i = 0; i < 3; i++) {
    if (emp[i].salary > 10000)
      printf("%s\n", emp[i].name);
  }
}

void selectEmp2(Employee emp[3]) {
  for (int i = 0; i < 3; i++) {
    if (strcmp(emp[i].desig, "Asst_manager") == 0)
      printf("%s\n", emp[i].name);
  }
}

void dispEmp(Employee emp[3]) {
  for (int i = 0; i < 3; i++) {
    printf("%s\t%s\t%s\t%c\t%d\n", emp[i].name, emp[i].desig, emp[i].doj,
           emp[i].gen, emp[i].salary);
  }
}