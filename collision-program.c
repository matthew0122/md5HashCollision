/* Copyright (C) 2006 Peter Selinger. This file is distributed under
   the terms of the GNU General Public License. See the file COPYING
   for details. */

#include <stdio.h>
#include <unistd.h>

/* do something innocent */
int main_good(int ac, char *av[]) {
  char buf[10];
  fprintf(stdout, "Hello, this is a normal program!\n");
  fprintf(stdout, "\n(press enter to quit)");
  fflush(stdout);
  fgets(buf, 10, stdin);
  return 0;
}

/* do something evil */
int main_evil(int ac, char *av[]) {
  char buf[10];
  fprintf(stdout, "This program is evil!!!\n");
  fprintf(stdout, "It could contain malicious code!");

  fprintf(stdout, "\n(press enter to quit)");
  fflush(stdout);
  fgets(buf, 10, stdin);
  return 0;
}
