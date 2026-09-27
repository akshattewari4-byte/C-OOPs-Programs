#include <iostream>
using namespace std;

class vscode {
private:
    int x;
    int y;

public:
    vscode(int a, int b) {
        x = a;
        y = b;
    }

    friend void show(vscode obj);
};

void show(vscode obj) {
    cout << obj.x << " " << obj.y << endl;
}

int main() {
    vscode obj(10, 20);
    show(obj);

    return 0;
}    
