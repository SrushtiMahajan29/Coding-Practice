#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
//append the data into the file
int main()
{
    int fd=0;
    
    fd=open("marvellous.txt",O_RDWRAPPEND);

    if(fd==-1)
    {
        printf("Unable to open file");
    }
    else
    {
        printf("File is opened with file descriptor %d\n",fd);
        char arr[]="Angular web development";
        int iret=0;
        iret=write(fd,arr,23);
        printf("%d bytes gets succefully returned into file",iret);
        close(fd);
    }
    return 0;
}
