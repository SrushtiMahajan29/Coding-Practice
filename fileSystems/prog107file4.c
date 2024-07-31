// Get the file name from user and get data from user and write that data into file

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

int main()
{
    char arr[100]="\0", filename[30]="\0";
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
        printf("File is opened with file descriptor %d\n",fd);
        printf("Enter data to write into the file: ");
        scanf( " %[^'\n']s",arr);
        int iret=0;
        iret=write(fd,arr,strlen(arr));
        printf("%d bytes gets succefully returned into file",iret);
        close(fd);
        printf("File is closed successfully\n");
    }
    return 0;
}
