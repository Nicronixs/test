//
// Created by schon on 03.12.2025.
//

#include "Or.h"

Bit Or:: evaluate(const Bit& a,const Bit& b) {
    if (a.getBit()==1){return 1;}
    if (b.getBit()==1){return 1;}
    return 0;
}