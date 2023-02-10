#include <stdio.h>
#include "rust_hello_world_api.h"


int main(int argc, char *argv[])
{
  printf("Hello From C!\n");
  hello_from_rust();
  return 0;
}