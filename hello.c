<<<<<<< HEAD
#include "stdio.h"

int main(void) {
  printf("Hello World\n");
 printf("This must be a monolithic
 design\n"); return 0;
}
=======
#include "stdio.h"
void microkernel_sendmsg(char *);
int main(void) {
  printf("Hello World\n");
printf("This must be a monolithic
 design\n");
microkernel_sendmsg("is more
 portable");
  return 0;
}
void microkernel_sendmsg(char *a){
 printf("microkernel: %s\n", a);
 }
>>>>>>> 679673ac0104a8d014c432823386e68e27ca92d7
