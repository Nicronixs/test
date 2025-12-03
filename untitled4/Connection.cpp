//
// Created by schon on 03.12.2025.
//
//(A ODER B)xor(A AND C)or(B Xor A)
#include "Connection.h"

Bit Connection::evaluate() {
    Or o1;
    Bit or_ab=o1.evaluate(a,b);

    And a1;
    Bit and_ac=a1.evaluate(a,c);

    Xor x1;
    Bit xor_ba=x1.evaluate(b,a);

    Bit xor1=x1.evaluate(or_ab,and_ac);
    Bit end=o1.evaluate(xor1,xor_ba);
    return end;
}

void Connection::print() {
    cout<<"A: "<<a.getBit()<<"|B:  "<<b.getBit()<<"|C:  "<<c.getBit()<<"|==  "<<evaluate().getBit()<<endl;
}