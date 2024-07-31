// Get the file name from user and read the all data from file and display it on screen

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

int main()
{
    char arr[100]={"\0"}, filename[30]="\0";
    int fd=0;

    printf("Enter the filename that you want to open from current directory: ");
    
    scanf("%s",filename);

    fd=open(filename,O_RDWR|O_APPEND);

    if(fd==-1)
    {
        printf("Unable to open file");
    }
    else
    {   
        int iret=0;
        printf("File is opened with file descriptor %d\n",fd);

        printf("Enter data that you want to writr into the file: ");
        scanf(" %[^'\n']s",arr);
        
        iret=write(fd,arr,strlen(arr));

        printf("%d bytes gets succefully returned into file\n",iret);
        close(fd);
    }

    return 0;
}
