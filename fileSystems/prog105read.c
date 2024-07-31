#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
//read the data from the file
int main()
{
    int fd=0;
    
    fd=open("marvellous.txt",O_RDWR);

    if(fd==-1)
    {
        printf("Unable to open file");
    }
    else
    {
        printf("File is opened with file descriptor %d\n",fd);
        char arr[50]="\0";
        int iret=0;
        iret=read(fd,arr,25);
        printf("%d bytes gets succefully read from file\n",iret);
        printf("%s",arr);
        close(fd);
    }
    return 0;
}
