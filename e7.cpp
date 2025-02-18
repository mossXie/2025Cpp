#include <iostream>
#include <cmath>
using namespace std;

class Vec{
    private:
        double* v;
        int len;
    public:
    // bulid new
        Vec(int length, double* valuse = nullptr) : len(length){
            v = new double [len];
            if(valuse){
                for(int i = 0; i < len; i++){
                    v[i] = valuse[i];
                }
            }else {
                for (int i = 0; i < len; i++) {
                    v[i] = 0.0;
                }
            }
        }
    //bulid new
        Vec(const Vec& other) : len(other.len) {
            v = new double[len];
            for (int i = 0; i < len; ++i) {
                v[i] = other.v[i];
            }
        }
        //delet new
        ~Vec() {
            delete[] v;
        }

        void set(double arg, int num) {
            if (num >= 0 && num < len) {
                v[num] = arg;
            }
        }

        double get(int num) const {
            if (num >= 0 && num < len) {
                return v[num];
            }
            return 0.0;
        }

        double euc_norm() const {
            double sum = 0.0;
            for (int i = 0; i < len; i++) {
                sum += v[i] * v[i];
            }
            return sqrt(sum);
        }

        double max_norm() const {
            double max = 0.0;
            for (int i = 0; i < len; i++) {
                if (abs(v[i]) > max) {
                    max = abs(v[i]);
                }
            }
            return max;
        }

        void print() const {
            cout << "(";
            for (int i = 0; i < len; i++) {
                double value = v[i];
                if (value == value) {
                    cout << value; 
                } else {
                    cout << value; 
                }
                if (i < len - 1) {
                    cout << ",";
                }
            }
            cout << ")" << endl;
        }
};

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