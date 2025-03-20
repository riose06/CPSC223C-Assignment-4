

#include <stdio.h>
#include <stdlib.h>

enum class {freshman, sophomore, junior, senior};

struct csufstudent
{
    char name[20];
    unsigned int cwid;
    char major[20];
    enum class level;
    unsigned int number_of_classes;
    char* classes[6];
    unsigned long phone;


}