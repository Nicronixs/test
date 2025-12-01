#include <iostream>
#include <vector>
using namespace std;

class Bit {
    bool value;
public:
    Bit(bool v = false) : value(v) {}
    bool get() const { return value; }
    void set(bool v) { value = v; }

    Bit operator&(const Bit& other) const { return Bit(value && other.value); }
    Bit operator|(const Bit& other) const { return Bit(value || other.value); }
    // TODO: nach Bedarf erweitern
};

class And {
public:
    Bit evaluate(const Bit& a, const Bit& b) { return a & b; }
};

class Or {
  // TODO: fertigmachen
};

class Xor {
  // TODO: fertigmachen
};

class MajorityCircuit {
    MajorityCircuit(bool a, bool b, bool c) : A(a), B(b), C(c) {}

    Bit evaluate() {
        // TODO: implementieren
    }

    void print() {
      // TODO: Eingänge und Ausgänge ausgeben
    }
};

int main() {
    // TODO: Wahrheitstabelle ausgeben
    return 0;
}
