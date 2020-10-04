#include <math.h>

int isprime(unsigned int num) {
    if ((!(num & 1) && num != 2) || num == 1) {
        return 0;
    }
    unsigned int num_sqrt = sqrt((double) num);
    for (int i = 3; i <= num_sqrt; i += 2) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}
