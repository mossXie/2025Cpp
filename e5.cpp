#include <iostream>
using namespace std;

class Quotient{
    private:
        int num1;
        unsigned  num2;

        int gcd(int a, unsigned  b) const {
            while (b != 0){
                int temp = b;
                b = abs(a) % b;
                a = temp;
            }
            return a;
        }
        
        void yue() {
            if (num2 == 0) {
                num2 = 1;
                return;
            }
    
            int divNum = gcd(num1, num2);
            num1 /= divNum; 
            num2 /= divNum; 
        }
    public:
        Quotient(int a, int b){// two arg
            if(b == 0){
                num2 = 1;
            }

            if (b < 0) {
                num1 = -a;
                num2 = -b;
            } else {
                num1 = a;
                num2 = b;
            }
            
            yue();
        }

        Quotient(int a) : num1(a), num2(1) {// only zi
            yue();
        }

        Quotient() : num1(0), num2(1) {// no arg
            yue();
        }

        void print() const {
            if (num2 == 1) {
                cout << num1 << endl;
            } else {
                cout << num1 << "/" << num2 << endl;
            }
        }
};

/*int main()
{
       Quotient q1(1, 2), q2(6, -12), q3(7), q4;
       q1.print();
       q2.print();
       q3.print();
       q4.print();
       return 0;
}*/