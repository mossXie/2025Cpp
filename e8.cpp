#include <iostream>
#include <cstring>
using namespace std;

class mstring{
    private:
        char* data;
        int size;
    public:
        mstring() :data(NULL), size(0){// ctr
        }

        mstring(const mstring& other) {// copy ctr
            size = other.size;
            data = new char[size];
            strcpy(data, other.data);
        }

        mstring(const char* str) {// c
            size = strlen(str);
            data = new char[size];
            strcpy(data, str);
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
            char* newData = new char[size + 1];
            strcpy(newData, data);
            newData[size] = c;
            delete[] data;
            data = newData;
            size++;
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
            if (i < 0 || i > size) return;

            char* newData = new char[size + 1];
            strncpy(newData, data, i);
            newData[i] = c;
            strcpy(newData + i + 1, data + i);
            delete[] data;
            data = newData;
            size++;
        }

        void insert(const char* c, int i) { // insert string
            if (i < 0 || i > size) return;

            int cLength = strlen(c);
            char* newData = new char[size + cLength + 1];
            strncpy(newData, data, i);
            strcpy(newData + i, c);
            strcpy(newData + i + cLength, data + i);
            delete[] data;
            data = newData;
            size += cLength;
        }
        
        void del(int i){ // delete char
            if (i < 0 || i >= size) return;

            char* newData = new char[size];
            strncpy(newData, data, i);
            strcpy(newData + i, data + i + 1);
            delete[] data;
            data = newData;
            size--;
        }
        void del(int i, int j){ // delete string
            if (i < 0 || j >= size || i > j) return;

            char* newData = new char[size - (j - i) + 1];
            strncpy(newData, data, i);
            strcpy(newData + i, data + j + 1);
            delete[] data;
            data = newData;
            size -= (j - i + 1);
        }

        int search(const char* str){ // serch son string
            const char* found = strstr(data, str);
            if (found) {
                return found - data;
            }
            return -1;
        }

        void print(){
            cout << data << endl;
        }
};

int main()
{
        mstring s ("hello world");
        mstring s1 = s;
        mstring s2;
        cout << s.length() << endl;
        if (s2.isempty())
        {
          s.add('!');
          s2.add("HI!");
          s.print();
          s2.print();
        }
        if (!s1.isempty())
        {
           s1.insert(' ',5);
           s1.insert('m',6);
           s1.insert('y',7);
           s.insert(" my",5);
           s.print();
           s1.print();
        }
        s.del(9);
        s1.del(5,7);
        s.print();
        s1.print();
        cout << s.search("my") << endl;
        cout << s2.search("my") << endl;
        return 0;
}