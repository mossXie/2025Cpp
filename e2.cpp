#include <iostream>
#include <string.h>
//Я думаю, что здесь удобнее использовать строку,
// но я не стал этого делать, потому что вы об этом еще не упомянули.
using namespace std;

char* letf(const char* str, int N){
    if (N <= 0 || str == NULL) {
        return NULL;
    }

    int len = strlen(str);

    if (N > len) {
        N = len;
    }

    char* result = new char[N];
    //Здесь нам просто нужно динамически выделять память, 
    //для экономии времени я использую указатель «new»
    for (int i = 0; i < N; i++) {
        result[i] = str[i];
    }

    return result;
}

unsigned long letf(unsigned long num, int N){
     if (N <= 0) {
        return 0;
    }

    unsigned long temp = num;
    int dt = 0;
    while (temp != 0) {
        temp /= 10;
        dt++;
    }
    
    if (N > dt) {
        return num;
    }

    unsigned long num1 = 1;
    for (int i = 0; i < dt - N; i++) {
        num1 *= 10;
    }
    unsigned long result = num / num1;

    return result;
}

int main(){
    char type[10];
    char input[100];
    unsigned long num = 0 ;
    int n;

    cin >> type;
    if(strcmp(type, "string") == 0){
        cin >> input;
        cin >> n;
        char* result = letf(input, n);
        cout << result << endl;
        delete result;
    }else if(strcmp(type, "number") == 0){
        cin >> num;
        cin >> n;
        unsigned long result = letf(num, n);
        cout << result << endl;
    }
}