#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;

class geometry{
    private:
        double x_, y_, z_;
    public:
        geometry(double x, double y, double z) : x_(x), y_(y), z_(z){}

        virtual void print() const {
            cout << "(" << x_ << "," << y_ << "," << z_ << ")";
        }

        virtual void move(double x, double y, double z){
            x_ = x;
            y_ = y;
            z_ = z;
        }
        
        virtual double volume() const = 0;
        virtual double area() const = 0;
        virtual ~geometry() {}
};

class ball : public geometry{
    private:
        double r_;
    public:
        ball(double x, double y, double z, double r) : geometry(x, y, z), r_(r){}
        void print() const {
            geometry::print();
            cout << " r=" << r_ << endl;
        }
        virtual double volume() const{
            return {(4.0/3) * M_PI * pow(r_, 3)};
        }
        virtual double area() const{
            return {4 * M_PI * pow(r_, 2)};
        }
};

class cube : public geometry{
    private:
        double l_;
    public:
        cube(double x, double y, double z, double l) : geometry(x, y, z), l_(l){}
        void print() const {
            geometry::print();
            cout << " l=" << l_ << endl;
        }

        virtual double volume() const {
            return {pow(l_, 3)};
        }

        virtual double area() const {
            return {6*pow(l_, 2)};
        }
};

class cylinder : public geometry{
    private:
        double r_;
        double h_;
    public:
        cylinder(double x, double y, double z, double r, double h) : geometry(x, y, z), r_(r), h_(h){}
        void print()const{
            geometry::print();
            cout << " r=" << r_ << " h=" << h_ << endl;
        }
        virtual double volume() const {
            return {M_PI * pow(r_, 2) * h_};
        }

        virtual double area() const {
            return {2 * M_PI * r_ * h_ + 2 * M_PI * pow(r_, 2)};
        }
};

/* int main()
{
        ball ba(1,2,3,3);
        cube cu(2,1,3,2);
        cylinder cy(3,1,2,3,4);
        ba.print();
        cout << "area ball = " << ba.area() << endl;
        cout << "volume ball = " << ba.volume() << endl;
        cu.print();
        cout << "area cube = " << cu.area() << endl;
        cout << "volume cube = " << cu.volume() << endl;
        cy.print();
        cout << "area cylinder = " << cy.area() << endl;
        cout << "volume cylinder = " << cy.volume() << endl;
        ba.move(0,0,0);
        ba.print();
        cu.move(-2,-5,-7);
        cu.print();
        cy.move(5,-9,1);
        cy.print();

        return 0;
} */