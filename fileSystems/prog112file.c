//Read data from a file using an array and check for digits in file
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

#define BUFFERSIZE 1024

int main()
{
    char FileName[30];
    char Arr[BUFFERSIZE] = {'\0'};

    int fd = 0 , iRet = 0;
    int iSize = 0;

    printf("Enter the name of file that you want to open from current directory\n");
    scanf("%s",FileName);

    fd = open(FileName, O_RDWR);

    if(fd == -1)
    {
        printf("Unable to open %s file\n",FileName);
    }    
    else
    {
        printf("%s gets opened succesfully with file descriptor %d\n",FileName,fd);

        int i=0,icnt=0;
        while((iRet = read(fd,Arr,sizeof(Arr))) != 0)
        {
            for(i=0;i<iRet;i++)
            {
                if(Arr[i]>=48 && Arr[i]<=57){
                    icnt++;
                }
            } 
        }
        printf("Number of digits in file are :%d",icnt);
        close(fd);
    }

    return 0;
}