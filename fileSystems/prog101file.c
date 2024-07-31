#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    int fd=0;
    
    fd=open("prog100file.c",O_RDONLY);

    if(fd==-1)
    {
        printf("Unable to open file");
    }
    else
    {
        printf("File is opened with file descriptor %d\n",fd);
        close(fd);
        printf("File is closed successfully\n");
    }
    return 0;
}
