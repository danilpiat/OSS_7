#include <stdio.h>

extern char **environ;
int main(int argc, char const *argv[])
{
   int num;
   int vars = 0;
   scanf_s(argv[1], "%d",&num);
   char **p;
   for (p = environ; *p != NULL; p++) 
   {
    if(vars<num) 
    printf_s("%s\n", *p); 
    else 
	  break;
    vars++;
	}
}
