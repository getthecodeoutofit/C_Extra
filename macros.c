#include<stdio.h>
#include<stdlib.h>

#define A 30 //here the #define is a macro is replases with its value before running the main function 
//we can write anything in this macro
#define ADD(a,b) printf("\nThe sum is: %d",a+b)

int main(){
    int a,c;
printf("%d",A);
//we can create functions of macros which can accept arguments
a = 5;
c = 10;
ADD(a,c);
// tocheck the conversion of preprocessor use command -E before output 
//gcc -E -o FIle_Name(new) oldFIleName.c 

//while using the macro it will save the memory more if in function it cant create another memory space, for if else condition we can use the ternary operator:::

//string icing effect (numbersigning) #string name/or any other datatype->#define str(sr1,str2) printf(#s1,"%d",s2)

// we can put these macros function in multiple lines of code by useing ({for every ending of line use \})in place of return we write the variable name which replace the whole function into a value ao later that change in function we can store that calue in another variable


//typeof fn

//DISADVANTAGES - when combile that macro is converted into the large no. of lines of code so the code will become very long we cant able to use pointer , it is very difficult to understand errors

//text replacers

return 0;
}