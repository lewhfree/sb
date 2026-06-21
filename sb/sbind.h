#include <stdio.h>

FILE *open_exec(char *);
void close_exec(void);

int check_if_unbound_exec(void);
int get_exec_start(void);
int get_exec_type(void);
int get_extender_type(void);
int unbind_exec(void);
int bind_exec(FILE *, FILE *, int, int);
const char *find_oem_info(void);

extern FILE *exec_handle;
