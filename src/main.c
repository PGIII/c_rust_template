#include <stdio.h>

extern void hello_from_rust(void);

int main(int argc, char *argv[])
{
  printf("Hello From C!\n");
  hello_from_rust();
  return 0;
}