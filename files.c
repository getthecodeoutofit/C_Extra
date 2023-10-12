#include<stdio.h>

int main(){

FILE *file;//FILE take the reference of file

file = fopen("mydata.txt","w");
// fputs("string",destination);

fclose(file);
return 0;
}