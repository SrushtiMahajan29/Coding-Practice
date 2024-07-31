// Get the file name from user and get data from user and read all data from file and display it on screen


#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

int main()
{
    char arr[100]={"\0"};
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

        while((iret=read(fd,arr,sizeof(arr)))!=0){
            printf("%s",arr);
           }

        close(fd);
    }

    return 0;
}
