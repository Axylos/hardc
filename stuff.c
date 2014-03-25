#include <stdio.h>
int main(int argc, char *argv[]) {

  char letters[] = "stuff\n";

  char *things[] = {"stuff", "more stuff"};

  printf("%s", letters);

  for(int i = 0; i <=1; i++) { printf("%s\n", things[i]);}
  return 0;
}
