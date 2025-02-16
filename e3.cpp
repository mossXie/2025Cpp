#include <iostream>
#include <cmath>
using namespace std;

class Complex{
	public:
		Complex(double arg_re, double arg_im){
			re = arg_re;
			im = arg_im;
		}
		Complex(double arg_re){
			re = arg_re;
			im = 0.;
		}
		Complex(){
			re = 0.;
			im = 0.;
		}
		void print(){
			cout << re << "+" << im << "i" << endl;
		}
		double modulo(){
			return sqrt(re*re+im*im);
		}
		double argument(){
			return atan2(im, re);
		}
		double get_re(){
			return re;
		}
		double get_im(){
			return im;
		}
	private:
		double re;
		double im;
};

double  pow2(Complex z){
	return z.get_re() * z.get_re() + z.get_im() * z.get_im(); 
}