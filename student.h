#include <string.h>
#include <stdio.h>
#include <stdlib.h>

enum grade {freshman, sophomore, junior, senior, unknown};

struct csufstudent
{
    char name[20];
    unsigned long cwid;
    char major[20];
    enum grade level;
    unsigned int number_of_classes;
    char* classes[6];
    unsigned long phone;
    float park;
};

enum grade atoe(char* string);
enum grade atoe(char* string)
{
    enum grade var;
    if (strcmp(string, "Freshman") == 0) {
        var = freshman;
    }
    else if (strcmp(string, "Sophomore") == 0) {
        var = sophomore;
    }
    else if (strcmp(string, "Junior") == 0) {
        var = junior;
    }
    else if (strcmp(string, "Senior") == 0) {
        var = senior;
    }
    else var = unknown;

    return var;
}