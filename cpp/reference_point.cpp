#include <iostream>

using namespace std;

int main(){
    int i = 1024;
    int &ref_i = i;
    int *p_i = &ref_i;
    cout << ref_i << endl;
    cout << &ref_i << endl;
    cout << &i << endl;
    cout << *p_i << endl;
    cout << p_i << endl;
    ref_i = 2048;
    cout << "ref_i was changed to: " << ref_i << " and its address now: " << &ref_i << endl;
}