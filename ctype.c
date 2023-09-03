#include<stdio.h>
#include<ctype.h>

int main(){
if(isalnum('a')){
    //here mwans "is alpha numeric number or character/latter"
    printf("true");
//alpha numeric are those which are number or character(alphabets only)
//special char are not alpha numeric
}
else{
    printf("false");
}

if(iscntrl('c')) printf("true");
//it tell/check the character which is not printable
else printf("false");
//for eg new line character is not a printable charater it will show true

if(isdigit('a')) printf("true");
else printf("false");
//it will check whether a character is true or false

if(isgraph('5')) printf("true");
//it will we the character can we graphical or not
else printf("false");

if(islower('g')) printf("true");
else printf("false");

//similarly using of is upper

if(isprint(' '))printf("true");
//it tell that the chaacter is printable or not 
else printf("false");//here spcae printed in the program so it will be true

if(ispunct(';'))printf("true");
//tell whether the character is punctuation or not

if(isspace(' '))printf("true");
//tell that it is whitespace or not \n will also print true
 
if(isxdigit(' ')) printf("true");
//tell the digit is hexadecimal or not

char c = tolower('A');
//similarly for uppercase




}