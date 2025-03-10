#include <iostream>
#include <cmath>
using namespace std;

class Complex{
    private:
        double re;
        double im;

    public:
        Complex(double x, double y) : re(x), im(y){}
        Complex() : re(0), im(0) {}
        Complex(double x) : re(x), im(0) {}

        Complex operator+(const Complex& other) const {
            return Complex(re + other.re, im + other.im);
        }// C + Objekt

        Complex operator+(double num) const {
            return Complex(re + num, im);
        }// N + Objekt

        friend Complex operator+(double num, const Complex& c) {
            return Complex(num + c.re, c.im);
        }// N + C

        Complex operator-(const Complex& other) const {
            return Complex(re - other.re, im - other.im);
        }// O - C
        
        Complex operator-(double num) const {
            return Complex(re - num, im);
        }// O - N

        friend Complex operator-(double num, const Complex& c) {
            return Complex(num - c.re, -c.im);
        }// N - C

        Complex operator*(const Complex& other) const {
            return Complex(re * other.re - im * other.im, re * other.im + im * other.re);
        }// O * C

        Complex operator*(double num) const {
            return Complex(re * num, im * num);
        }// O * N

        friend Complex operator*(double num, const Complex& c) {
            return Complex(num * c.re, num * c.im);
        }// N * C

        Complex& operator=(const Complex& other) {
            if (this != &other) {
                re = other.re;
                im = other.im;
            }
            return *this;
        }// copy C

        bool operator==(const Complex& other) const {
            return re == other.re && im == other.im;
        }// eq T no eq F

        friend ostream& operator<<(ostream& os, const Complex& c) {
            if (c.im == 0) {// I = 0
                os << c.re;

            } else if (c.re == 0) { // N = 0
                if (c.im == 1) // I = i ? 1 : -1 
                    os << "i";
                else if (c.im == -1)
                    os << "-i";
                else
                    os << c.im << "i";
            } else {// N != 0
                os << c.re;
                if (c.im == 1)
                    os << "+i";
                else if (c.im == -1)
                    os << "-i";
                else if (c.im > 0)
                    os << "+" << c.im << "i";
                else
                    os << c.im << "i";
            }
            return os;
        }
};
/*
int main()
{
   Complex c(1,-2), g(3), v;
   cout << "c = " << c << endl;
   cout << "g = " << g << endl;
   cout << "v = " << v << endl;
   v = 4.*c*2.;
   cout << "v = " << v << endl;
   g = 3.-g+c-2.*v;
   cout << "g = " << g << endl;
   cout << "2.*g*v = " << 2.*g*v << endl;
   v = g = c;
   if (c == g)
        v = 2.*Complex(0,1);
   else
        v = 2.;
   cout << "c = " << c << " g = " << g << "v = " << v << endl;
   return 0;
}*/