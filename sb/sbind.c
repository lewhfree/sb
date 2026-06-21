#include <stdio.h>
#ifndef SBIND_H
#define SBIND_H
#include "sbind.h"
#endif

FILE* open_exec(char *filename) {
  (void)filename;
  return NULL;
}
void close_exec(void) { return; }

int check_if_unbound_exec(void) { return 1; }
int get_exec_start(void) { return 1; }
int get_exec_type(void) { return 1; }
int get_extender_type(void) { return 1; }
int unbind_exec(void) { return 1; }
int bind_exec(FILE* stubhandle, FILE* exechandle, int stubsize, int execsize) {
  (void)stubhandle;
  (void)exechandle;
  (void)stubsize;
  (void)execsize;
  return 1;
}
const char *find_oem_info(void) { return ""; }

FILE *exec_handle;
