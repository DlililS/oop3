#include <iostream>
#include <cmath>
using namespace std;
class Complex {
public:

    double Im;
    double Re;
    void setValues(double image, double real) {
        Im = image;
        Re = real;
    }
    Complex operator+(const Complex& c) const
    {
        Complex temp{};

        temp.Re = Re + c.Re;
        temp.Im = Im + c.Im;

        return temp;
    }
    Complex operator - (Complex& c) const
    {
        Complex temp{};

        temp.Re = Re - c.Re;
        temp.Im = Im - c.Im;

        return temp;
    }
    Complex operator *(const Complex& c) const {
        Complex temp{};
        temp.Re = Re * c.Re;
        temp.Im = Re * c.Im;

        return temp;
    }
    Complex operator /(const Complex& c) const {
        Complex temp{};
        double r = c.Re * c.Re + c.Im * c.Im;
        temp.Re = (Re * c.Re + Im * c.Im) / r;
        temp.Re = (Im * c.Re - Re * c.Im) / r;
        return temp;
    }

};
ostream& operator<<(ostream& stream, const Complex& obj) {
    return stream << obj.Im << " + " << obj.Re << "i";
}
class Vector {
    double a1, a2, a3;
public:
    Vector() : a1(0), a2(0), a3(0) { };
    Vector(double _a1, double _a2, double _a3) {
        a1 = _a1;
        a2 = _a2;
        a3 = _a3;
    }
    void setValues(double _a1, double _a2, double _a3) {
        a1 = _a1;
        a2 = _a2;
        a3 = _a3;
    }
    Vector plus(Vector a) {
        a.a1 = a.a1 + this->a1;
        a.a2 = a.a2 + this->a2;
        a.a3 = a.a3 + this->a3;
        return (a);

    }
    Vector multiply(Vector a) {
        Vector vector;
        a.a1 = a.a1 * this->a1;
        a.a2 = a.a2 * this->a2;
        a.a3 = a.a3 * this->a3;
        //vector
        return (a);
    }
};
class Circle {
    float p = 3.14;
    double r{};
public:
    void setValues(double _r) {
        r = _r;
    }
    double square() const {
        return p * pow(r, 2);
    }

    double lengthc() const {
        return 2 * p * r;
    }
    double diameter() const {
        return 2 * r;
    }
};
int main() {
    Vector a(1, 2, 3);
    Vector b(5, 1, 2);
    Vector c = a.plus(b);
    return 0;
};

