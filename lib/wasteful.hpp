#ifndef __WASTEFUL__
#define __WASTEFUL__

#include <stdint.h>

class Wasteful {
    private:
        unsigned int wastefulness;
        uint8_t** wasted_space;
        uint8_t randomByte();
    public:
        Wasteful(unsigned int);
        int makeWaste();
        ~Wasteful();
};

#endif