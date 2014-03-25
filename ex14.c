#include <string.h>
#include <stdio.h>
#include <ctype.h>

//forward declarations
int can_print_it(char ch);
void print_letters(char arg[], int length);

void print_arguments(int argc, char *argv[])
{

  for(int i = 1; i < argc; i++) {
    int length = strlen(argv[i]);
    print_letters(argv[i], length);
  }
}

void print_letters(char arg[], int length)
{
  for(int i = 0; i < length; i++) {
    char ch = arg[i];

    if(isalpha(ch) || isblank(ch)) {
      printf("'%c' == %d ", ch, ch);
    }
  }
  printf("\n");
}


int main(int argc, char*argv[]) {
  print_arguments(argc, argv);
  return 0;
}







