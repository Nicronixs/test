//
// Created by schon on 03.12.2025.
//

#include "Xor.h"

Bit Xor::evaluate(const Bit& a,const Bit& b) {
    if (a.getBit()==b.getBit()) {
        return 0;
    }
    return 1;
}