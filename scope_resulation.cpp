#include <iostream>
using namespace std;

class Student {
public:
    int id;
    string name;
    int studies;

    void details(int x, string y, int z);
};

// Scope Resolution Operator ::
void Student::details(int x, string y, int z) {
    id = x;
    name = y;
    studies = z;

    cout << id << endl;
    cout << name << endl;
    cout << studies << endl;
}

int main() {
    Student s;

    s.details(1234, "Akshat", 10);

    return 0;
}