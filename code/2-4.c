#include "ch2.h"
int main(){
	int cnt=0;
	while(1){
		char name[64];
		snprintf(name,sizeof(name),"%d.txt",cnt);
		int fd=creat(name,0644);
		cnt++;
	}
}
