// program to open the file present in cuttent directory 

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

int main()
{

    char Fname[20];
    int Fd =0;  // File Descriptor

    printf("Enter file name to open\n");
    scanf("%s",Fname);

    Fd = open(Fname, O_RDONLY);
    if(Fd ==-1)
    {
        printf("Unable to open the file \n");
        return -1;
    }

    printf("File is sucessfully opend with Fd %d\n");

    close(Fd);

    return 0;


}