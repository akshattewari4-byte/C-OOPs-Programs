#include <iostream>
using namespace std;

class teacher {
public:
    string name;
    int age;
    int salary;

    teacher(string a, int b, int c) {
        name = a;
        age = b;
        salary = c;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    teacher t("Akshat", 20, 50000);

    t.display();

    return 0;
}