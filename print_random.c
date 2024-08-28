#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "random.h"
#define SIZE 7

char* rand_string_alloc(size_t size);
void rand_string(char* s, size_t size);

int main(void){
    srand(time(NULL));
    char* word = rand_string_alloc(SIZE); //function to allocate memory for word
    rand_string(word, SIZE); //filling allocated space with characters
    printf("%s\n", word);
}

//function to fill empty allocated memory using randchar()
//randchar is from the random.h header file
void rand_string(char* s, size_t size){
    for(size_t i = 0; i < size; ++i){
        *(s+i) = randchar();
    }
}

char* rand_string_alloc(size_t size)
{
     char *s = malloc(size + 1);
     if (s) {
         rand_string(s, size);
     }
     return s;
}
