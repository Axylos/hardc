#include <stdio.h>

int main(int argc, char *argv[])
{

  //go through each string in argv

  int i = 1;
  while (i < argc) {
    printf("arg %d: %s\n", i, argv[i]);
    i++;
  }

  //let's make our own array of strings
  char *states[] = {
    "California", "North Korea",
      "Deutschland", "Russia"
  };

  int num_states = 4;
  i = 0; //watch for this
  while(i < num_states) {
    printf("state %d: %s\n", i, states[i]);
    i++;
  }

  printf("\n%s\n", argv[4]);

  i = argc;
  printf("%d\n", i);
  while (i > 0) {
    if (argv[i]) {
    states[i - 2] = argv[i];
    printf("\nargv: %s\n", states[i - 2]);
    };
    i--;

  }

  return 0;

}
