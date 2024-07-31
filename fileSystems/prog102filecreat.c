#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
//create a file
int main()
{
    int fd=0;
    
    fd=creat("marvellous.txt",0777);

    if(fd==-1)
    {
        printf("Unable to creat file");
    }
    else
    {
        printf("File is opened with file descriptor %d\n",fd);
    }
    return 0;
}
