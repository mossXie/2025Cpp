#include <iostream>
#include <cstring>
using namespace std;

class mstring {
    private:
        char* data;
        int size;
    public:
        mstring();
        mstring(const mstring& other);
        mstring(const char* str);
        ~mstring();
        
        int length() const;
        bool isempty() const;
        
        void add(char c);
        void add(const char* c);
        
        void insert(char c, int i);
        void insert(const char* c, int i);
        
        void del(int i);
        void del(int i, int j);
        
        int search(const char* str) const;
        void print() const;
};

mstring::mstring() : size(0) {
    data = new char[1];
    data[0] = '\0';
}

mstring::mstring(const mstring& other) {
    size = other.size;
    data = new char[size];
    strcpy(data, other.data);
}

mstring::mstring(const char* str) {
    size = strlen(str);
    data = new char[size];
    strcpy(data, str);
}

mstring::~mstring() {
    delete[] data;
}

int mstring::length() const {
    return size;
}

bool mstring::isempty() const {
    return size == 0 ? true : false;
}

void mstring::add(char c) {
    char* newData = new char[size + 1];
    strcpy(newData, data);
    newData[size] = c;
    delete[] data;
    data = newData;
    size++;
}

void mstring::add(const char* c) {
    int cLength = strlen(c);
    char* newData = new char[size + cLength + 1];
    strcpy(newData, data);
    strcat(newData, c);
    delete[] data;
    data = newData;
    size += cLength;
}

void mstring::insert(char c, int i) {
    if (i < 0 || i > size) return;

    char* newData = new char[size + 1];
    strncpy(newData, data, i);
    newData[i] = c;
    strcpy(newData + i + 1, data + i);
    delete[] data;
    data = newData;
    size++;
}

void mstring::insert(const char* c, int i) {
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

void mstring::del(int i) {
    if (i < 0 || i >= size) return;

    char* newData = new char[size];
    strncpy(newData, data, i);
    strcpy(newData + i, data + i + 1);
    delete[] data;
    data = newData;
    size--;
}

void mstring::del(int i, int j) {
    if (i < 0 || j >= size || i > j) return;

    char* newData = new char[size - (j - i) + 1];
    strncpy(newData, data, i);
    strcpy(newData + i, data + j + 1);
    delete[] data;
    data = newData;
    size -= (j - i + 1);
}

int mstring::search(const char* str) const {
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

void mstring::print() const {
    cout << data << endl;
}

int main()
{
    mstring s("hello world");
    mstring s1 = s;
    mstring s2;
    cout << s.length() << endl;
    if (s2.isempty()) {
        s.add('!');
        s2.add("Hl!");
        s.print();
        s2.print();
    }
    if (!s1.isempty()) {
        s1.insert(' ', 5);
        s1.insert('m', 6);
        s1.insert('y', 7);
        s.insert(" my", 5);
        s.print();
        s1.print();
    }
    s.del(9);
    s1.del(5, 7);
    s.print();
    s1.print();
    cout << s.search("my") << endl;
    cout << s2.search("my") << endl;
    return 0;
}