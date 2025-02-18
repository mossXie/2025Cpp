#include<iostream>
#include<cmath>
using namespace std;

class Complex
{
	public:
		Complex(double arg_re = 0, double arg_im = 0)
		{
			re=arg_re;
			im=arg_im;
		}
/*
		Complex(double arg_re)
		{
			re=arg_re;
			im=0.;
		}
		Complex()
		{
			re=0.;
			im=0.;
		}
*/
		Complex(const Complex& other)
		{
			re = other.re;
			im = other.im;
		}
		void print() const
		{
			cout << re << "+" << im << "i" << endl;
		}
		double modulo() const
		{
			return sqrt(re*re+im*im);
		}
		double argument() const
		{
			return atan2(im,re);
		}
		double get_re() const {return re;}
		double get_im() const {return im;}
		~Complex(){}
	private:
		double re;
		double im;
};

double pow2(Complex* z) //pointer
{
	return z->get_re()*z->get_re() + z->get_im()*z->get_im();
}

double pow2(const Complex & z) //ref
{
    return z.get_re()*z.get_re() + z.get_im()*z.get_im();
}

/*
double pow2(Complex z) //copy
{
	return z.get_re()*z.get_re() + z.get_im()*z.get_im();
}
*/
/*
int main()
{
	Complex z(3,5);
	Complex z1(6);
	Complex z2;

	//z.re = 5; z.im = 3;//
	z.print();
	z1.print();
	z2.print();
	cout << "|z| = " << z.modulo() << endl;
	cout << " pow2(z) " << pow2(z) << endl;
//	cout << " pow2(8) " << pow2(8.) << endl;
	return 0;

}*/