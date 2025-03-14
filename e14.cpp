#include <iostream>
#include <cmath>
#include <string>
using namespace std;

class VecException{
    private:
        string mes;
        int index1;
        int index2;
    public:
        VecException(const string& msg) : mes(msg) {}
        VecException(const string& msg, const int& l1, const int& l2) : mes(msg), index1(l1), index2(l2) {}
        VecException(const string& msg, const int& size) : mes(msg), index1(size){}
        
        const string& getMessage() const { return mes; }
        const int& getIndex1() const { return index1; }
        const int& getIndex2() const {return index2;}

};

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

            if(len != other.len){
                throw VecException("addition of vectors of different lengths",
                     len, other.len);
            }

            for(int i = 0; i < len; i++){
                rel.v[i] = v[i] + other.v[i];
            }
            return rel;
        }

        Vec operator- (const Vec& other ) const {
            Vec rel(len);

            if(len != other.len){
                throw VecException("subtraction of vectors of different lengths",
                     len, other.len);
            }

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

        double& operator[] (int i) {
            if(i < 0 || i >= len){
                throw VecException("incorrect indexing", i);
            }
            return v[i];
        }
};

/*void error()
{
     Vec v1(5), v2(3), v3(4);

      v3 = v1-v2;
}

void error()
{
    Vec v(5);
    double a = v[7];
}*/

int main()
{
    try
    {
        error();
    }catch(const VecException& e){
        string str = e.getMessage();

        if(str == "addition of vectors of different lengths"){
            cerr << "Exception: " << str << ": " << e.getIndex1() << " " << e.getIndex2() << endl;
        }else if(str == "subtraction of vectors of different lengths"){
            cerr << "Exception: " << str << ": " << e.getIndex1() << " " << e.getIndex2() << endl;
        }else if(str == "incorrect indexing"){
            cerr << "Exception: " << str << ": " << e.getIndex1() << endl;
        }

        return 2;
    }catch(... ) { 
        cerr << "Exception: unknown error" << endl;
        return 2;
     }

    return 0;
} 