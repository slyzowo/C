#include <stdio.h>
#include <string.h>

struct Student{
  char name[12];
  float gpa;
};


int main(){

  struct Student student1 = {"spongebob", 4.4};
  struct Student student2 = {"patrick", 1.2};
  struct Student student3 = {"gary", 5.0};

  struct Student students[] = {student1, student2, student3};

  for(int i = 0; i < sizeof(students) / sizeof(students[0]); i++){
    printf("Student name : %s\n", students[i].name);
    printf("Student gpa : %f \n", students[i].gpa);
  }

return 0;
}