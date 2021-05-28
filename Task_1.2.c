#include <stdio.h>

extern char **environ;
int main(int argc, char const *argv[])
{
  char **p;
  int vars = 0;
  int args = 0;
  for (p = environ; *p != NULL; p++)
   vars++;
  printf_s("Number of environment variables: %d\n", vars);
  for(int j = 1; j < argc; j++)
    args++;
  printf_s("Number of environment arguments: %d\n", args);
}
