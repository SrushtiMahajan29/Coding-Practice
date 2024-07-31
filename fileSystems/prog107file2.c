// Get the file name from user and create that file into current directory 

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    char filename[30]="\0";
    int fd=0;

    printf("Enter the filename that you want to create into current directory: ");
    scanf("%s",filename);

    fd=creat(filename,0777);

    if(fd==-1)
    {
        printf("Unable to creat %s file",filename);
    }
    else{
        printf("%s gets opened successfully with %d",filename,fd);
        close(fd);
    }

    return 0;
}
