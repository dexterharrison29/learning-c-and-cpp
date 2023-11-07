#include <stdio.h> // i keep forgetting to include this bitch

int main(){
  double pi = 3.1415926535897932; //more precise float. 
  int x;
  x = 123;
  int y = 123;
  int age = 95; // no this is not my actual age
  float gpa = 1.5; // yes, this is my actual gpa.
  char grade = 'F';
  char name[] = "Dexter Harrison";
  printf("Hello %s\n", name); // %s represents strings
  printf("You are %d years old\n", age); // %d represents integers
  printf("you have very bad grades. A %c average?\n", grade); // %c represents characters
  printf("your gpa is a %f\n", gpa); // %f represents floats.
  printf("The value of pi is %lf\n", pi); // %lf(long float) represents doubles.
  return 0;
}
