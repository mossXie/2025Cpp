#include <iostream>
#include <cstring>
using namespace std;

class event {
protected:
    char name[100];
    int year, month, day;
public:
    event(const char* n, int y, int m, int d) {
        strcpy(name, n);
        year = y;
        month = m;
        day = d;
    }
    virtual void print_res() const {
        cout << name << " " << year << " " << month << " " << day;
    }
    virtual void change_date(int new_year, int new_month, int new_day) {
        year = new_year;
        month = new_month;
        day = new_day;
    }
    virtual void change_grade(int x) = 0;
    virtual ~event() {}
};

class test : public event {
private:
    bool passed;
public:
    test(const char* n, int y, int m, int d, bool p) : event(n, y, m, d) {
        passed = p;
    }
    test(const char* n, int y, int m, int d, int grade) : event(n, y, m, d) {
        passed = (grade >= 3);
    }
    void print_res() const override {
        event::print_res();
        cout << " " << (passed ? "true" : "false") << endl;
    }

    void change_grade(int grade) {
        if(grade >= 3){
            passed = true;
        }else{
            passed = false;
        }
    }
};

class exam : public event {
private:
    int grade;
public:
    exam(const char* n, int y, int m, int d, int g) : event(n, y, m, d) {
        grade = g;
    }
    void print_res() const override {
        event::print_res();
        cout << " Grade " << grade << endl;
    }
    void change_grade(int new_grade) {
        grade = new_grade;
    }
};

/*int main()
{
        const int NUM =7;
        event *session[NUM];

        session[0]=new test("MS Office",2024,12,24,true);
        session[1]=new exam("Operation System",2025,1,15,2);
        session[2]=new test("Practicum",2024,12,25,false);
        session[3]=new exam("Differential equation",2025,1,10,3);
        session[4]=new test("Theory of probability",2024,12,29,true);
        session[5]=new exam("Philosophy",2025,1,24,5);
        session[6]=new exam("C++",2025,1,20,4);

        for (int i=0;i<NUM;i++)
                session[i]->print_res();

        session[2]->change_date(2025,2,28);
        session[2]->change_grade(true);

        session[1]->change_date(2025,3,12);
        session[1]->change_grade(3);

        cout<<endl;
        for (int i=0;i<NUM;i++)
                session[i]->print_res();

        for (int i=0;i<NUM;i++)
        delete session[i];
        return 0;
}*/