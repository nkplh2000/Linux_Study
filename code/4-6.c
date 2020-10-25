#include "ch03.h"
int main(){
  int fd;
  if((fd=open("./out.data",O_WRONLY|O_TRUNC))==-1)
        err_exit("open!");
  if(dup2(fd,STDOUT_FILENO) == -1)
        err_exit("Redirect!\n");

  printf("This is test data for redirect!\n");
  return 0;
}
