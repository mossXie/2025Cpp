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

        Vec operator+ (const Vec& other) const {
            Vec rel(len);
            for(int i = 0; i < len; i++){
                rel.v[i] = v[i] + other.v[i];
            }
            return rel;
        }

        Vec operator- (const Vec& other ) const {
            Vec rel(len);
            for (int i = 0; i < len; i++) {
            rel.v[i] = v[i] - other.v[i];
            }
            return rel;
        }

        Vec operator* (double num) const {
            Vec rel(len);
            for (int i = 0; i < len; ++i) {
                rel.v[i] = v[i] * num;
            }
            return rel;
        }

        friend Vec operator* (double num, const Vec& other){return other * num;}

        Vec& operator= (const Vec& other) {
            if (this != &other) {
                if (len != other.len) {
                    delete[] v;
                    len = other.len;
                    v = new double[len];
                }
                for (int i = 0; i < len; i++) {
                    v[i] = other.v[i];
                }
            }
            return *this;
        }

        bool operator== (const Vec& other) const {
            if (len != other.len) {
                return false;
            }//size
            for (int i = 0; i < len; i++) {
                if (v[i] != other.v[i]) {
                    return false;
                }// element
            }
            return true;
        }

        friend ostream& operator<<(ostream& os, const Vec& vec) {
            os << "(";
            for (int i = 0; i < vec.len; ++i) {
                os << vec.v[i];
                if (i < vec.len - 1) {
                    os << ",";
                }
            }
            os << ")";
            return os;
        }

        double& operator[] (int i) {return v[i];}
};

/*int main()
{
        double y1[4] = {1,2,3,4};
        double y2[4] = {-2,1,3,-3};

        Vec u(4, y1), v(4, y2);
        Vec w(4);

        cout << "u = " << u << endl;
        cout << "v = " << v << endl;
        w = u = u;
        cout << "w = u = " << w << endl;
        w = 4.*u + v*3;
        cout << "w = 4.*u + v*3 = " << w << endl;
        w[2] = 3;
        w[0] = -1;
        cout << "w = " << w << endl;

        return 0;
}*/