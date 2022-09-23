#include<stdio.h>
// Header file inclusion 
//stdio.h header file contain standard function declaration 
//we will learn function topic in detail 


// main() is a entry point function of C 
// main() is a user-defined function 
// program must have main() function atleast 

int main()
{
    int iNo1 = 10; // variable declaration 

    // variable ==> whose value can change  

    /*
            variable declaration 
            datatype variable-name
             int       num      
    */

    float fValue = 3.14;
    double dData = 6.10;

    //variable declaration 
    // initialization 
    char cValue = 'M';
     char ch = 'A'; 
     
    //variable declaration 
    // initialization

 //printf() is used to print some data/string on terminal    

   printf("Integer is %d\n",iNo1);
   printf("Float is %f\n",fValue);
   printf("Double is %lf\n",dData);
   printf("Character is %c\n",cValue);

// return 0 indicates successfull execution of program 
//any non-zero indicate program failure
    return 0;
}

/*
    %d      Decimal             int
    %f      Float                  float
    %lf     Long float          double
    %c      Chracter            char
    %s      String                string
*/



