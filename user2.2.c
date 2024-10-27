#include<stdio.h>
#include<fcntl.h>
#include<string.h>
#include<unistd.h>
int main(){
    //write
    int fd;
    mkfifo("/tmp/myfifo", 0666);
    char msg[80];
    while (1)
    {
        //write
        fd=open("/tmp/myfifo",O_WRONLY);
        fgets(msg,80,stdin);
        write(fd,msg,strlen(msg)+1);
        close(fd);

        //read
        fd=open("/tmp/myfifo",O_RDONLY);
        read(msg,80,sizeof(msg));
        printf("User2 %s",msg);
        close(fd);
    }
    
}