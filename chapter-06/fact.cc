#include"Chapter6.h"

unsigned long long fact(unsigned n){
    if (n<1) return 0;
    unsigned long long total = 1;
    for (;n > 1; n--)
    {
        total *= n;
    }
    return total;
}
