#include <iostream>
using namespace std;
//#include
class Exception{
    private:
        string msg_;
    public:
        Exception(const string& msg) : msg_(msg) {}
        virtual const string& getMsg() const {return msg_;}
};

class VectorException : public Exception{
    private:
        int address;
    public:
        VectorException(const string& msg, int addr) : Exception(msg), address(addr) {}
        const int& getAddress() const {return address;}
};

class Vector_2d{
    private:
        int x_;
        int y_;
    public:
        Vector_2d();
        Vector_2d(int x, int y) : x_(x), y_(y){}
        friend istream& operator>>(std::istream& in, Vector_2d& v);
        friend ostream& operator<<(std::ostream& out, const Vector_2d& v);
        int getX() const;
        int getY() const;
};

Vector_2d::Vector_2d() {
    x_ = 0;
    y_ = 0;
}
int Vector_2d::getX() const {
    return x_;
}
int Vector_2d::getY() const {
    return y_;
}
istream& operator>>(istream& in, Vector_2d& v){
    int x, y;
    if (!(in >> x)) {
        if (in.eof()) {
            v.x_ = 0;
            v.y_ = 0;
            return in;
        }
        throw Exception("one coordinate");
    }
    if (x < 0) {
        throw VectorException("negative coordinate", x);
    }
    if (!(in >> y)) {
        throw Exception("one coordinate");
    }
    if (y < 0) {
        throw VectorException("negative coordinate", y);
    }
    v.x_ = x;
    v.y_ = y;
    return in;
}
ostream& operator<<(ostream& out, const Vector_2d& v) {
    out << "(" << v.x_ << "," << v.y_ << ")";
    return out;
}

int main(){
    try{
        Vector_2d v;
        cin >> v;
        cout << v << endl;
    }catch(const VectorException& e){
        cerr << "Exception: " << e.getMsg() << ":" << e.getAddress() << endl;
        return 3;
    }catch(const Exception& e){
        cerr << "Exception: " << e.getMsg() << endl;// one coordinate
        return 2;
    }catch(...){
        cerr << "Unknown error" << endl;
        return 1;
    }
    return 0;
}