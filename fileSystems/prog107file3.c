// Get the file name from user and create that file into current directory 

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    char filename[30]="\0";

    printf("Enter the filename that you want to delete from current directory: ");
    scanf("%s",filename);
    unlink(filename);

    return 0;
}
