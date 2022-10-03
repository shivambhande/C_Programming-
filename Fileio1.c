#include<stdio.h> // standared input output functions
#include<stdlib.h>//for  allocation and deallocation of memory 
#include<unistd.h>// access to the POSIX lobrary in c 

// Read : 4
// Write : 2
// Execute : 1

// Permissions      0_Owner_Group_Other

int main()
{
    char Fname[20]; // for file name
    int fd =0; // file descriptor

    printf("Please enter the file   To creat\n:");
    scanf(" %[^'\n']s",Fname);


//   to create new file in current directory 
    fd = creat(Fname, 0444);

    if(fd == -1)
    {
        printf("file is not created \n");
        return -1;
    }

    printf("file is sucessfully created with fd = %d\n",fd);

    // to close the created file     
    close(fd);
    return 0;
}