#include <iostream>
#include <cmath>
using namespace std;

class BaseEllipse {
    private:
        double x_, y_;
    protected:
    public:
        BaseEllipse(double x, double y) : x_(x), y_(y) {}
        void Move(double sh_x, double sh_y) {
            x_ += sh_x;
            y_ += sh_y;
        }
        virtual void Print() const {
            cout << "(" << x_ << "," << y_ << ")";
        }
        virtual double Area() const = 0;
};

class Circle : public BaseEllipse {
    private:
        double r_;
    public:
        Circle(double x, double y, double r) : BaseEllipse(x, y), r_(r) {}
        virtual void Print() const;
        virtual double Area() const { return M_PI * r_ * r_; }
};

void Circle::Print() const {
    BaseEllipse::Print();
    cout << " r = " << r_ << endl;
}

class Ellipse : public BaseEllipse {
    private:
        double a_, b_, angle_;
    public:
        Ellipse(double x, double y, double a, double b, double angle)
            : BaseEllipse(x, y), a_(a), b_(b), angle_(angle) {}
        virtual void Print() const {
            BaseEllipse::Print();
            cout << " a = " << a_ << " b = " << b_ << " angle = " << angle_ << endl;
        }
        virtual double Area() const { return M_PI * a_ * b_; }
};

/*int main() {
    Circle cl(2, 3, 5);
    Ellipse el(-2, -3, 3, 4, 0);
    BaseEllipse& ref_c = cl;
    BaseEllipse& ref_e = el;
    ref_c.Print();
    ref_e.Print();
    cout << ref_c.Area() << endl;
    cout << ref_e.Area() << endl;
    return 0;
}*/
