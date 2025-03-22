#include <iostream>
#include <cmath>
using namespace std;

class Vec {
    private:
        double* v;
        int len;
    public:
        explicit Vec(int length, double* values = nullptr);
        Vec(const Vec& other);
        ~Vec();
        
        void set(double arg, int num);
        double get(int num) const;
        double euc_norm() const;
        double max_norm() const;
        void print() const;
};

Vec::Vec(int length, double* values) : len(length) {
    v = new double[len];
    if (values) {
        for (int i = 0; i < len; i++) {
            v[i] = values[i];
        }
    } else {
        for (int i = 0; i < len; i++) {
            v[i] = 0.0;
        }
    }
}

Vec::Vec(const Vec& other) : len(other.len) {
    v = new double[len];
    for (int i = 0; i < len; ++i) {
        v[i] = other.v[i];
    }
}

Vec::~Vec() {
    delete[] v;
}

void Vec::set(double arg, int num) {
    if (num >= 0 && num < len) {
        v[num] = arg;
    }
}

double Vec::get(int num) const {
    if (num >= 0 && num < len) {
        return v[num];
    }
    return 0.0;
}

double Vec::euc_norm() const {
    double sum = 0.0;
    for (int i = 0; i < len; i++) {
        sum += v[i] * v[i];
    }
    return sqrt(sum);
}

double Vec::max_norm() const {
    double max_val = 0.0;
    for (int i = 0; i < len; i++) {
        if (abs(v[i]) > max_val) {
            max_val = abs(v[i]);
        }
    }
    return max_val;
}

void Vec::print() const {
    cout << "(";
    for (int i = 0; i < len; i++) {
        double value = v[i];
        cout << value;
        if (i < len - 1) {
            cout << ",";
        }
    }
    cout << ")" << endl;
}

/*int main(void)
{
    double y1[3] = {1,2,3};
    double y2[5] = {2,1,0,5,7};
    Vec x(3, y1), y(5, y2), z(4);
    Vec u = x;

    y.print();
    x.print();
    z.print();
    u.print();

    x.set(23, 2);  u.set(34, 1);  z.set(-3, 3);
    cout << "x[2] = " << x.get(2) << endl;
    cout << "u[1] = " << u.get(1) << endl;
    cout << "euc_norma y: " << y.euc_norm() << endl;
    cout << "max_norma z: " << z.max_norm() << endl;
    return 0;
}*/