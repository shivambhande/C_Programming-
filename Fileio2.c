// creating a new file and write the data in that file with the help of systeam call

#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>

int main()
{
    char Fname[20];
    char Data[100];
    int Fd =0;

    printf("Enter the Name of File :");
    scanf("%[^'\n']s",Fname);

    Fd = creat(Fname,0777);

    if(Fd ==-1)
    {
        printf("file is not created\n");
        return -1;
    }

    printf("File is sucessfully created with fd = %d\n",Fd);

    printf("Enter the data that you want to write\n");
    scanf(" %[^'\n']s",Data);

// function used to write the data in File whose File descriptor is FD
            
    write(Fd,Data,strlen(Data));

    close(Fd);

    return 0;
}
