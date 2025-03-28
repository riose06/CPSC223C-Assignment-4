/*
 * Author: Ethan Rios
 * CWID: 880071006
 * Email: eirios@csu.fullerton.edu
 * Due: March 27 @ 11:59pm
 * CPSC 223C Assignment 4 - Binary Files
 * Last updated: February 26 @ 4:53pm
 */

// PURPOSE: 

// "r.sh" in the terminal will run the bash program!!

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "student.h"

// Removes the built-in next line (\n) when using the fgets() function
void trim(char *s) {
    s[strcspn(s, "\n")] = '\0';
}

int main () 
{
    char* file;
    char input[64];
    int count;
    file = fgets(input, 64, stdin);
    FILE* txtin = fopen(file, "r");
    FILE* binout = fopen("student.bin", "wb");

    struct csufstudent person;
    char temp[32];

    while (NULL != fgets(person.name, 20, txtin))
    {
        trim(person.name);
        fscanf(txtin, "%lu", &person.cwid);
        fgets(person.major, 20, txtin);
        trim(person.major);
        fgets(temp, 32, txtin);
        person.level = atoe(temp);
        for (int i = 0; i < person.number_of_classes; i++) {
            char classTemp[64];
            fgets(classTemp, 64, txtin);
            trim(classTemp);
            person.classes[i] = (char*)malloc(strlen(classTemp) + 1);
            strcpy(person.classes[i], classTemp);  
        }        
        fscanf(txtin, "%lu", &person.phone);
        fscanf(txtin, "%f", &person.park);
        fwrite(&person, sizeof(struct csufstudent), 1, binout);
        count++;
    }

    printf("Wrote %d structs into the file\n", count);
    fclose(txtin);
    fclose(binout);

    return 0;
}
