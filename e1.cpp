#include <iostream>
using namespace std;

void func(const char* str){
    cout << str << endl;
}

void func(const char* str, int x){
    for(int i = 0; i < x; i++){
        cout << str << endl;
    }
}

void func(double num){
    cout << num*2 << endl;
}


void func(double num, int x){
    double y = num * x;
    cout << y << endl;
}

void func(int* arr, int n) { 
    int y = 0; 
    for (int i = 0; i < n; i++) {
        y += arr[i]; 
    }
    cout << y << endl;
}

void func(double* num, int n) { 
    double y = 1; 
    for (int i = 0; i < n; i++) {
        y *= num[i]; 
    }
    cout << y << endl;
}

/*int main()
{
     int array[7] = {1,2,3,4,5,6,7};
                func("mather");
                func("abcd", 3);
                func(3.14);
                func(2.71828, 4);
                func(array, 7);
     return 0;
}*/
