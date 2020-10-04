#include <string.h>

#include "utils.h"

/*
size_t custom_strlen(const char* str) {
    return sizeof(str);
}
*/

size_t custom_strlen(const char *str) {
    size_t len = 0;
    while (str[len] != '\0') {
        ++len;
    }
    return len;
}

// TODO: Implement `power of` function
/*
int custom_pow(int base, int power) {
    return 0;
}
*/

int custom_pow(int base, unsigned int power) {
    int result = 1;
    for (int i = 0; i < power; ++i) {
        result *= base;
    }
    return result;
}
