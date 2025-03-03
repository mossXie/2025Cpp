#include <iostream>
using namespace std;
class Vector_2d{
	public:
		Vector_2d(double x = 0.,double y = 0.){
			x_ = x;
			y_ = y;
		}
		void print(const char*str)const;
		Vector_2d operator+(const Vector_2d & op) const;
		Vector_2d operator-(const Vector_2d & op) const{
			return Vector_2d(x_ - op.x_,y_ - op.y_);//simple way
		}
		const Vector_2d& operator=(const Vector_2d & op);//fast,because don't need to do 2 copy
		const Vector_2d& operator+=(const Vector_2d& op);
		Vector_2d operator*(double a) const;
		friend Vector_2d operator*(double a,const Vector_2d & op);//внешняя функций
	private:
		double x_,y_;
};
const Vector_2d& Vector_2d::operator=(const Vector_2d & op){
	x_ =op.x_;
	y_ =op.y_;
	return *this;
}
Vector_2d Vector_2d::operator+(const Vector_2d & op) const{
	Vector_2d tmp;
	tmp.x_ = x_ + op.x_;
	tmp.y_ = y_ + op.y_;
	return tmp;
}
const Vector_2d& Vector_2d::operator+=(const Vector_2d & op){
	x_ += op.x_;
	y_ += op.y_;
	return *this;
}
Vector_2d operator*(double a,const Vector_2d & op){
	return Vector_2d(op.x_*a,op.y_*a);
}
Vector_2d Vector_2d::operator*(double a) const{
	return Vector_2d(x_*a,y_*a);
}
void Vector_2d::print(const char*str = 0)const{
	if(str) cout << str << " = ";
	cout << "(" << x_ << "," << y_ << ")" << endl;
}
/*
int main(){
	Vector_2d u(1.2,3.4);
	Vector_2d v(3.14);
	Vector_2d w;
	w = u+v;
	u=v;//ok
	u=v+w;//ok
	u=v=w;//error  u.operate=(v.operate=(w)); v.operate=(w) return void,but u.operate(Vector_2d) need return Vector_2d
	u=u-v;
	w+=v;
	w=w*5;//ok w.operator*(4)
	w=5*w;//error 5.operator*(w) ok --> friend
	u.print("u");
	v.print("v");
	w.print("w");
	u.print();
	return 0;
}
*/