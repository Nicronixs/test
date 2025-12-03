//
// Created by schon on 03.12.2025.
//

#ifndef UNTITLED4_CONNECTION_H
#define UNTITLED4_CONNECTION_H
#include"Bit.h"
#include"And.h"
#include"Xor.h"
#include"Or.h"
#include<iostream>
using namespace std;

class Connection {

private:
    Bit a;
    Bit b;
    Bit c;
public:
    Connection(const Bit& a,const Bit& b, const Bit& c) : a(a), b(b),c(c){}

    Bit evaluate();
    void print();
};



#endif //UNTITLED4_CONNECTION_H