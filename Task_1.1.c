#include <stdio.h>

extern char **environ;
int main(int argc, char *argv[])
{
  char **p;
  int vars = 0;
  for (p = environ; *p != NULL; p++) 
    vars++;
  printf_s("Number of environment variables: %d\n", vars);
}
