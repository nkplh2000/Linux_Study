#include "ch03.h"
int main()
{
      int n,fd;
      char buf;
      fd=open("./file.test",O_CREAT|O_RDWR,0644);
      srand(time(0));
      n = rand()%26;
      buf=(char)('a'+n);
      printf("n=%c\n",buf);
      write(fd,&buf,1);
      sleep(10);
      lseek(fd,10,SEEK_SET);
      srand(time(0));
      n=rand()%26;
      buf = (char)('a'+n);
      write(fd,&buf,1);
      close(fd);
      return 0;
}
