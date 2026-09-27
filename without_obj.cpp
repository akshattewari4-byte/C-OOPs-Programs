// use 2 variables and 3 functions & access the values without creating the objects 
#include <iostream>
using namespace std;

class sam {
private:
    static int x;
    static int y;

public:
    static void set(int a, int b) {
        x = a;
        y = b;
    }

    static void get() {
        cout << x << " " << y << endl;
    }

    static void add() {
        cout << x + y << endl;
    }
};

// Define static variables
int sam::x = 0;
int sam::y = 0;

int main() {
    sam::set(10, 20);
    sam::get();
    sam::add();

    return 0;
}