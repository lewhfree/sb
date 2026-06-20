int open_exec(char *filename) { return 1; }
void close_exec(void) { return; }

int check_if_unbound_exec(void) { return 1; }
int get_exec_start(void) { return 1; }
int get_exec_type(void) { return 1; }
int get_extender_type(void) { return 1; }
int unbind_exec(void) { return 1; }
int bind_exec(int stubhandle, int exechandle, int stubsize, int execsize) {
  return 1;
}
char *find_oem_info(void) { return ""; }

short exec_handle = 1;
