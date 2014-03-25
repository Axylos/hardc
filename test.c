#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]){
  int *ages = (int[]){1, 12, 3, 4, 5};

  printf("\n%lu\n", (sizeof(*ages)/ sizeof(int)));
  for(int i = 0; i<((sizeof(ages)) / sizeof(int)); i++) {
    printf("%d\n", *(ages+i));
  }
  return 0;
}
