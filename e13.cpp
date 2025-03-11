#include <iostream>
#include <cmath>
#include <string>
using namespace std;
// EXception类一定要放到最前面！！！！
class VecException{
    private:
        string mes;
    public:
        VecException(const string& msg) : mes(msg) {}
        const string& getMessage() const { return mes; }
};

class Vec{
    private:
        double* v;
        int len;
    public:
    // bulid new gouzao
        Vec(int length, double* valuse = nullptr) : len(length){
            if(len < 0){
                throw VecException("length error");
            }
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
    //bulid new   copy
        Vec(const Vec& other) : len(other.len) {
            if(len < 0){
                throw VecException("length error");
            }
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
            if (num < 0 || num >= len) {
                throw VecException("coordinate error in set()");
            }
            v[num] = arg;
        }

        double get(int num) const {
            if (num < 0 || num >= len) {
                throw VecException("coordinate error in get()");
            }
            return v[num];
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

/*void error()
{
    double y1[3] = {1,2,3};
    double y2[5] = {2,1,0,5,7};
    Vec x(3, y1), y(5, y2), z(4);
    Vec u = x;
    y.print();
    x.print();
    z.print();
    u.print();
}*/

int main()
{
    try
    {
        error();
    }catch(const VecException& e) {
        cerr << "Exception: " << e.getMessage() << endl;
        return 2;
    }catch(...){
        cerr << "Exception: unknown error" << endl;
        return 2;
    }
    return 0;
}  