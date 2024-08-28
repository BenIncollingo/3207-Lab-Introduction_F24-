#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "random.h"

//returns a random character
char randchar(){
    return rand() % (90 - 65 + 1) + 65;
}