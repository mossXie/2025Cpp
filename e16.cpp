#include <iostream>
#include <string>
using namespace std;

class Person {
private:
    string firstname_;
    string lastname_;

protected:
    int age_;

public:
    Person(const char* firstname, const char* lastname, int age) {
        firstname_ = firstname;
        lastname_ = lastname;
        age_ = age;
        //cout << " Constr Person" << endl;
    }

    virtual ~Person(){
        //cout << " Delstr Person" << endl;
    }

    void ChangeAge(int new_age) {
        age_ = new_age;
    }

    virtual void Print() const {
        cout << "Name: " << firstname_ << " LName: " << lastname_ << " Age: " << age_ << endl;
    }
};

class Student : public Person{
    private:
        double grade_;

    public:
        Student(const char* firstname, const char* lastname, int age, double grade)
            : Person(firstname, lastname, age), grade_(grade) {
                //cout << " Constr Student" << endl;
            }
        virtual ~Student(){
            //cout << " Delstr Student" << endl;
        }

        virtual void Print() const {
            Person::Print();
            cout << "Grade: " << grade_ << endl;
        }

        bool Bonus() const {
            if (age_ >= 18 && grade_ >= 4.5) return true;
            else return false;
    }
};

/*int main() {
    Person pers("A", "B", 34);
    Student stud("C", "D", 19, 4.5);
    pers.Print();
    stud.ChangeAge(20);
    stud.Print();
    cout << stud.Bonus() << endl;
    Person* P[5];
    for(int i = 0; i < 5; i++){
        if(i%2)
            P[i] = new Person("A", "B", i+30);
        else 
            P[i] = new Student("S", "T", i+15, i*24%5+1.1);
    }
    for(int i = 0; i < 5; i++){
        P[i]->Print();
    }
    for(int i = 0; i < 5 ; i++){
        delete P[i];
    }
    return 0;
}*/
