#include <stdio.h>

int main(int argc, char *argv[]) {
  if (argc < 2) {
    printf("ERROR: You need at least one argument.\n");
    //this is how you abort a program
    return 1;
  }

  int k = 1;
  for (k = 1; k < argc; k++) {

  int i = 0;
  for(char letter = argv[k][i], i = 0; argv[k][i] != '\0'; i++, letter = argv[k][i]) {

    switch(letter) {
      case 'a':
      case 'A': 
        printf("%d: 'A'\n", i);
        break;

      case 'e':
      case'E':
        printf("%d: 'E'\n", i);
        break;
        
      case 'i':
      case 'I':
        printf("%d: 'I'\n", i);
        break;

      case 'o':
      case 'O':
        printf("%d: 'O'\n", i);
        break;

      case 'u':
      case 'U':
        printf("%d: 'U'\n", i);
        break;

      case 'y':
      case 'Y':
        if (i > 2) {
          //it's only sometims Y
          printf("%d: 'Y'\n", i);
        }

        break;

      default:
        printf("%d: %c is not a vowel\n", i, letter);
    }
  }
  }
  char *name = "balls";
  printf("\n%p\n", &name);
  return 0;
}

