// Copyright (c) 2012 MIT License by 6.172 Staff

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main() {
  // Please print the sizes of the following types:
  // int, short, long, char, float, double, unsigned int, long long
  // uint8_t, uint16_t, uint32_t, and uint64_t, uint_fast8_t,
  // uint_fast16_t, uintmax_t, intmax_t, __int128, and student

  // Here's how to show the size of one type. See if you can define a macro
  // to avoid copy pasting this code.
  printf("size of %s : %zu bytes \n", "int", sizeof(int));
  // e.g. PRINT_SIZE("int", int);
  //      PRINT_SIZE("short", short);

  // Alternatively, you can use stringification
  // (https://gcc.gnu.org/onlinedocs/cpp/Stringification.html) so that
  // you can write
  // e.g. PRINT_SIZE(int);
  //      PRINT_SIZE(short);

  // Composite types have sizes too.
  typedef struct {
    int id;
    int year;
  } student;

  student you;
  you.id = 12345;
  you.year = 4;


  // Array declaration. Use your macro to print the size of this.
  int x[5];

  // You can just use your macro here instead: PRINT_SIZE("student", you);
  printf("size of %s : %zu bytes \n", "student", sizeof(you));
  int a1;
  printf("size of %s : %zu bytes, sizeof pointer: %zu bytes\n", "int", sizeof(int), sizeof(&a1));
  short a2;
  printf("size of %s : %zu bytes, sizeof pointer: %zu bytes\n", "short", sizeof(short), sizeof(&a2));
  float a3;
  printf("size of %s : %zu bytes, sizeof pointer: %zu bytes\n", "float", sizeof(float), sizeof(&a3));
  long a4;
  printf("size of %s : %zu bytes, sizeof pointer: %zu bytes\n", "long", sizeof(long), sizeof(&a4));
  char a5;
  printf("size of %s : %zu bytes, sizeof pointer: %zu bytes\n", "char", sizeof(char), sizeof(&a5));
  double a6;
  printf("size of %s : %zu bytes, sizeof pointer: %zu bytes\n", "double", sizeof(double), sizeof(&a6));
  unsigned int a7;
  printf("size of %s : %zu bytes, sizeof pointer: %zu bytes\n", "unsigned int", sizeof(unsigned int), sizeof(&a7));
  long long a8;
  printf("size of %s : %zu bytes, sizeof pointer: %zu bytes\n", "long long", sizeof(long long), sizeof(&a8));
  uint8_t a9;
  printf("size of %s : %zu bytes, sizeof pointer: %zu bytes\n", "uint8_t", sizeof(uint8_t), sizeof(&a9));
  uint16_t a10;
  printf("size of %s : %zu bytes, sizeof pointer: %zu bytes\n", "uint16_t", sizeof(uint16_t), sizeof(&a10));
  uint32_t a11;
  printf("size of %s : %zu bytes, sizeof pointer: %zu bytes\n", "uint32_t", sizeof(uint32_t), sizeof(&a11));
  uint64_t a12;
  printf("size of %s : %zu bytes, sizeof pointer: %zu bytes\n", "uint64_t", sizeof(uint64_t), sizeof(&a12));
  uint_fast8_t a13;
  printf("size of %s : %zu bytes, sizeof pointer: %zu bytes\n", "uintfast8_t", sizeof(uint_fast8_t), sizeof(&a13));
  uint_fast16_t a14;
  printf("size of %s : %zu bytes, sizeof pointer: %zu bytes\n", "uintfast16_t", sizeof(uint_fast16_t), sizeof(&a14));
  uintmax_t a15;
  printf("size of %s : %zu bytes, sizeof pointer: %zu bytes\n", "uintmax_t", sizeof(uintmax_t), sizeof(&a15));
  intmax_t a16;
  printf("size of %s : %zu bytes, sizeof pointer: %zu bytes\n", "intmax_t", sizeof(intmax_t), sizeof(&a16));
  __int128 a17;
  printf("size of %s : %zu bytes, sizeof pointer: %zu bytes\n", "__int128", sizeof(__int128), sizeof(&a17));









  return 0;
}
