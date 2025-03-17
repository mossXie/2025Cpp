#include <iostream>
#include <cstring>
#include <string>
using namespace std;


class MyException {
    private:
        string ErrorFunctionName;
        int ErrorArg1;
        int ErrorArg2;
    
    public:
        MyException(const string& func, int code1, int code2 = 0)
            : ErrorFunctionName(func), ErrorArg1(code1), ErrorArg2(code2) {}
    
        void print() const {
            if (ErrorArg2 == 0) {
                cerr << "Exception: problem in " << ErrorFunctionName << " incorrect parameter:" << ErrorArg1 << endl;
            } else {
                cerr << "Exception: problem in " << ErrorFunctionName << " incorrect parameter:" << ErrorArg1 << " " << ErrorArg2 << endl;
            }
        }
    };

class mstring{
    private:
        char* data;
        int size;
    public:
        mstring() : size(0){// ctr
            data = new char[1];
            data[0] = '\0';
        }
        mstring(const char* str) {// c
                    size = strlen(str);
                    data = new char[size + 1];
                    strcpy(data, str);
                }

        mstring(const mstring& other) {// copy ctr
            size = other.size;
            data = new char[size + 1];
            strcpy(data, other.data);
        }

        

        ~mstring() {
            delete[] data;
        }

        int length(){  // size
            return size;
        }

        bool isempty(){ 
            return size == 0 ? true : false; // if kong
        }

        void add(char c) {  // add char
            int new_size = size + 1;
            char* newData = new char[new_size + 1];
            strncpy(newData, data, size);
            newData[size] = c;
            newData[new_size] = '\0';
            delete[] data;
            data = newData;
            size = new_size;
        }

        void add(const char* c){ // add string
            int cLength = strlen(c);
            char* newData = new char[size + cLength + 1];
            strcpy(newData, data);
            strcat(newData, c);
            delete[] data;
            data = newData;
            size += cLength;
        }

        void insert(char c, int i) { // insert char
            if (i < 0 || i > size) throw MyException("insert", i);

            char* newData = new char[size + 2];
            strncpy(newData, data, i);
            newData[i] = c;
            strcpy(newData + i + 1, data + i);
            delete[] data;
            data = newData;
            size++;
        }

        void insert(const char* c, int i) { // insert string
            if (i < 0 || i > size) throw MyException("insert", i);

            int cLength = strlen(c);
            char* newData = new char[size + cLength + 1];
            strncpy(newData, data, i);
            strcpy(newData + i, c);
            strcpy(newData + i + cLength, data + i);
            delete[] data;
            data = newData;
            size += cLength;
        }
        
        void del(int i) { // delete char
            if (i < 0 || i >= size) throw MyException("del", i);

            char* newData = new char[size];
            strncpy(newData, data, i);
            strcpy(newData + i, data + i + 1);
            delete[] data;
            data = newData;
            size--;
        }

        void del(int i, int j){ // delete string
            if (i < 0 || j >= size || i > j) throw MyException("del", i, j);

            char* newData = new char[size - (j - i + 1) + 1];
            strncpy(newData, data, i);
            strcpy(newData + i, data + j + 1);
            delete[] data;
            data = newData;
            size -= (j - i + 1);
        }

        int search(const char* str) { // search substring
            if (str == nullptr || *str == '\0') return -1;
        
            int zlength = size;
            int sonLength = strlen(str);
        
            if (sonLength > zlength) return -1;
        
            for (int i = 0; i <= zlength - sonLength; i++) {

                int j;

                for (j = 0; j < sonLength; j++) {
                    if (data[i + j] != str[j]) {
                        break;
                    }
                }

                if (j == sonLength) { 
                    return i; 
                }

            }

            return -1; 

        }

        void print(){
            cout << data << endl;
        }


};

void error()
{
        mstring s ("hello world");
        mstring s1 = s;
        mstring s2;
        if (!s1.isempty())
        {
           s1.insert(' ', 5);
           s1.insert('m',6);
           s1.insert('y',7);
           s.insert(" my",5);
           s.print();
           s1.print();
        }
        s.del(-1);
        //cout << s << s1 << s2 << endl;

}

/*void error()
{
        mstring s ("hello world");
        mstring s1 = s;
        mstring s2;
        if (!s1.isempty())
        {
           s1.insert(' ', 5);
           s1.insert('m',6);
           s1.insert('y',7);
           s.insert(" my",5);
           s.print();
           s1.print();
        }
        s.del(9);
        s1.del(-5,7);
        s.print();
        s1.print();
}*/

int main()
{
    try {
        error();
    } catch (const MyException& e) {
        e.print();
    }catch(...) { 
        cerr << "Exception: unknown error" << endl;
        return 2;
    }
    return 0;
}