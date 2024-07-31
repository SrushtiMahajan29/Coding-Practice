// Get the file name from user and get data from user and write that data into file read the 10 byte data again read further from file and display it on screen
//bookmark---reads after readed content

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

int main()
{
    char arr[100]={"\0"};
    char brr[100]={"\0"};
    char filename[30];

    int fd=0;

    printf("Enter the filename that you want to open from current directory: ");
    
    scanf("%s",filename);

    fd=open(filename,O_RDWR);

    if(fd==-1)
    {
        printf("Unable to open file");
    }
    else
    {
        int iret=0;

        printf("File is opened with file descriptor %d\n",fd);

        iret=read(fd,arr,10);
        
        printf("%d bytes gets succefully returned into file\n",iret);

        printf("Data from file: %s\n",arr);

        iret=read(fd,brr,12);
        
        printf("%d bytes gets succefully returned into file\n",iret);

        printf("Data from file: %s\n",brr);
        

        close(fd);
        printf("File is closed successfully\n");
    }

    return 0;
}
