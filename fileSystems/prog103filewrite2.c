#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
//rewrite the data
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
        char arr[]="Placement activity";
        int iret=0;
        iret=write(fd,arr,22);
        printf("%d bytes gets succefully returned into file",iret);
        close(fd);
    }
    return 0;
}
