#include <iostream>
using namespace std;

template <class T>
class Vector_2d{
    public:
        Vector_2d(T x = 0, T y = 0) : x_(x), y_(y) {}
        void print() const;
        T max_norm() const {return (abs(x_)>abs(y_)) ? abs(x_) : abs(y_);}
        const Vector_2d<T>& operator=(const Vector_2d<T>& op);
        Vector_2d<T> operator*(T a) const {return Vector_2d<T>(a*x_, a*y_);}
        template <typename V>
        friend Vector_2d<V> operator+(const Vector_2d<V>& op1, const Vector_2d<V>& op2);
    private:
        T x_, y_;
};
template<typename T>
Vector_2d<T> operator+(const Vector_2d<T>& op1, const Vector_2d<T>& op2){
    Vector_2d<T> tmp;
    tmp.x_ = op1.x_ + op2.x_;
    tmp.y_ = op1.y_ + op2.y_;
    return tmp;
}

template<typename T>
const Vector_2d<T>& Vector_2d<T>::operator=(const Vector_2d<T>& op){
    x_ = op.x_;
    y_ = op.y_;
    return *this;    
}

template <typename D>
void Vector_2d<D>::print() const{
    cout << "(" << x_ << "," << y_ << ")" << endl;
}


/*int main() {
    Vector_2d<int> ui(3,4), vi(8),wi;
    ui.print();
    vi.print();
    wi = ui * vi;
    wi.print();
    Vector_2d<double> ud(3.14, 2.7), vd(8.6),wd;
    ud.print();
    vd.print();
    wd = ud * vd;
    wd.print();
    return 0;
}*/