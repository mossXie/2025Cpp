#include <iostream>
#include <cmath>
using namespace std;

class Vector_3d{
    private:
        double x, y, z; 
    
    public:
        Vector_3d(double a, double b, double c):x(a), y(b), z(c){
        }

        Vector_3d():x(0), y(0), z(0){}

        Vector_3d(double a) : x(a), y(0), z(0){}

        double euc_norm() const {
            return sqrt(x * x + y * y + z * z);
        }
        
        double max_norm() const{
            return max(max(abs(x), abs(y)), abs(z));
        }

        double get_x(){
            return x;
        }

        double get_y(){
            return y;
        }

        double get_z(){
            return z;
        }

        void print(){
            cout << "(" << x << "," << y << "," << z << ")" << endl;
        }

        void set(double a, double b, double c){
            x = a;
            y = b;
            z = c;
        }
};
