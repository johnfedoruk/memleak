#include "wasteful.hpp"

#include <iostream>
#include <string>
#include <sstream>
#include <stdint.h>
#include <stdlib.h>

#define GIGA 1000000000

Wasteful::Wasteful(unsigned int size_int) {
    this->wastefulness = size_int;
}

int Wasteful::makeWaste() {
    std::cout << "Generating " << this->wastefulness << "GB of useless data on the heap" << std::endl;
    unsigned long int i, j;
    this->wasted_space = new uint8_t*[this->wastefulness];
    for(i=0;i<this->wastefulness;i++) {
        this->wasted_space[i] = new uint8_t[GIGA];
        for(j=0;j<GIGA;j++) {
            this->wasted_space[i][j] = this->randomByte();
        }
        std::cout << "Generated " << i+1 << "GB of data" << std::endl;
    }

    // unsigned int tmp=0;

    // for(i=0;i<this->wastefulness;i++) {
    //     for(j=0;j<GIGA;j+=1000) {
    //         if(wasted_space[i][j]==0) {
    //             tmp++;
    //         }
    //     }
    // }
    std::cout << "Done generating" << std::endl;
    return 0;
}

uint8_t Wasteful::randomByte() {
    return rand() % 255;
}

Wasteful::~Wasteful() {
    std::cout << "Deleting Wasteful instance" << std::endl;
}