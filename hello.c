#include "stdio.h"
void microkernel_sendmsg(char *);
int main(void) {
  printf("Hello World\n");
  return 0;
}
void microkernel_sendmsg(char *a){
 printf("microkernel: %s\n", a);
 }