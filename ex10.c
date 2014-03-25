#include <stdio.h>

int main(int argc, char *argv[])
{
  int i = 0;

  //go through each string in argv
  //why am I skipping arv[0]
  for (i = 0; i < argc; i++) {
    printf("arg %d: %s\n", i, argv[i]);
  }

  //let's make our own array of strings
  char *states[] = {
    "California", NULL, "Washington", "Texas"
  };
  int num_states = 4;

  for (i = 0; i < num_states; i++) {
    printf("state %d: %s\n", i, states[i]);
  }


  states[1] = argv[2];
  printf("\n\n argv states: %s", states[1]);


  return 0;


}
