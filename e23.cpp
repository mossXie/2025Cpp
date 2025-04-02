#include <iostream>
#include <string>
using namespace std;

class Flower {
    public:
        Flower(string name = " ", long num = 10);
        static void Print_flowers();
        ~Flower();
    private:
        static int wcont_;
        static int pcont_;
        string type_;
};

int Flower::wcont_ = 0;
int Flower::pcont_ = 0;

Flower::Flower(string name, long num) {
    if (name == "white" || name == "pink") {
        if (name == "white") {
            wcont_++;
            type_ = "white";
        } else {
            pcont_++;
            type_ = "pink";
        }
    } else {
        if (wcont_ < pcont_) {
            wcont_++;
            type_ = "white";
        } else if (wcont_ > pcont_) {
            pcont_++;
            type_ = "pink";
        } else {
            if (num % 2 == 0) {
                pcont_++;
                type_ = "pink";
            } else {
                wcont_++;
                type_ = "white";
            }
        }
    }
}

Flower::~Flower() {
    if (type_ == "white") {
        wcont_--;
    } else if (type_ == "pink") {
        pcont_--;
    }
}

void Flower::Print_flowers() {
    cout << "White: " << wcont_ << " Pink: " << pcont_ << endl;
}

