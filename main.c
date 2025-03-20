/*
 * Author: Ethan Rios
 * CWID: 880071006
 * Email: eirios@csu.fullerton.edu
 * Due: February 26 @ 11:59pm
 * CPSC 223C Assignment 2 - String Search
 * Last updated: February 26 @ 4:53pm
 */

// PURPOSE: 

// "r.sh" in the terminal will run the bash program!!

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Removes the built-in next line (\n) when using the fgets() function
void trim(char *s) {
    s[strcspn(s, "\n")] = '\0';
}

int main () 
{
    struct csufstudent person;

    FILE* file_ptr = fopen("student.bin", w+b);
    fwrite(&person, size.of(struct csufstudent), 1, file_ptr);





    return 0;
}
