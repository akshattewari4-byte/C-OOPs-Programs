// make  function and perform following task
// set , get , add 2 object 

#include<iostream>
using namespace std;
class phone{
private:
    int x;
    int y;
public:
    void set(int a, int b){
        x=a;
        y=b;

    }
    void get(){
        cout<<x<<" "<<y<< endl;

    }
    
    phone run(phone r){
        phone temp;
        temp.x=x+r.x;
        temp.y=y+r.y;
        return temp;
    }
};
int main(){
    phone o1,o2,o3,o4;
    o1.set(10,20);
    o2.set(30,40);
    o1.get();
    o3=o1.run(o2);
    o3.get();
    return 0;
}