#include <iostream>
using namespace std;

int main (){
    int a = 10;
    
    int b = 20;

    int c = 30;

    int d = c++;

    int e = d++;
     
    int f = e++;

    int n = ++f;

    cout << "a = " << a <<endl;
    cout << "b = " << b <<endl;
    cout << "c = " << c <<endl;
    cout << "d = " << d <<endl;
    cout << "e = " << e <<endl;
    cout << "f = " << f <<endl;
    cout << "n = " << n <<endl;


     

    return 0; 

}