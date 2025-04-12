/*A program to determine the grade of a student based on their
 marks in four subjects whereby each subject is out of 20.
 A student can have either grade A, B, or C.
 */

#include <stdio.h>

int main() {
  int maths;
  int cs;
  int physics;
  int chemistry;

  printf("Enter your marks for Mathematics: ");
  scanf("%d", &maths);
  if (maths >= 18 && maths <= 20) {
    printf("Grade: A\n");
  } else if (maths >= 15) {
    printf("Grade: B\n");
  } else {
    printf("Grade: C\n");
  }
  printf("Enter your marks for Computer Science: ");
  scanf("%d", &cs);
  if (cs >= 18 && cs <= 20) {
    printf("Subject: Computer Science\nGrade: A\n");
  } else if (cs >= 15) {
    printf("Subject: Computer Science\nGrade: B\n");
  } else {
    printf("Subject: Computer Science\nGrade: C\n");
  }

  printf("Enter your marks for Physics: ");
  scanf("%d", &physics);
  if (physics >= 18 && physics <= 20) {
    printf("Subject: Physics\nGrade: A\n");
  } else if (physics >= 15) {
    printf("Subject: Physics\nGrade: B\n");
  } else {
    printf("Subject: Physics\nGrade: C\n");
  }

  printf("Enter your marks for Chemistry: ");
  scanf("%d", &chemistry);
  if (chemistry >= 18 && chemistry <= 20) {
    printf("Subject: Chemistry\nGrade: A\n");
  } else if (chemistry >= 15) {
    printf("Subject: Chemistry\nGrade: B\n");
  } else {
    printf("Subject: Chemistry\nGrade: C\n");
  }

  return 0;
}
