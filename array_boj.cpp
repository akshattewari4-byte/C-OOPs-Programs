#include<iostream>
using namespace std;

class student {
private:
    int a;
    int b;

public:
    void set(int x, int y) {
        a = x;
        b = y;
    }

    void get() {
        cout << a << " " << b;
    }

    friend student add(student, student);
};

student add(student r, student t) {
    student temp;

    temp.a = r.a + t.a;
    temp.b = r.b + t.b;

    return temp;
}

int main() {

    student arr[3], brr[3], crr[3];

    int a, b;

    for (int i = 0; i < 3; i++) {
        cout << "enter a and b for arr: ";
        cin >> a >> b;
        arr[i].set(a, b);
    }
    

    for (int i = 0; i < 3; i++) {
        cout << "enter a and b for brr: ";
        cin >> a >> b;
        brr[i].set(a, b);
    }

    cout << "\nresult\n";
    for (int i = 0; i < 3; i++) {
        crr[i] = add(arr[i], brr[i]);
    }

    for (int i = 0; i < 3; i++) {
        crr[i].get();
        cout << endl;
    }    
  


    return 0;
}