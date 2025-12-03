//
// Created by schon on 03.12.2025.
//

#include "And.h"
Bit And:: evaluate (const Bit& a,const Bit& b) {
    if (a.getBit()&&b.getBit()==1) {
        return 1;
    }
    return 0;
}
