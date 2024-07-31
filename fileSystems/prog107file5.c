// Get the file name from user and get data from user and write that data into file read the 10 byte data from file and display it on screen

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

int main()
{
    char arr[100]={'\0'}, filename[30];
    int fd=0,iret=0;

    printf("Enter the filename that you want to open from current directory: "); 
    scanf("%s",filename);

    fd=open(filename,O_RDWR);

    if(fd==-1)
    {
        printf("Unable to open file");
    }
    else
    {
        printf("File is opened with file descriptor %d\n",fd);

        iret=read(fd,arr,10);

        printf("%d bytes gets succefully read from the file\n",iret);
        
        printf("Data from file is %s",arr);

        close(fd);
    }

    return 0;
}
