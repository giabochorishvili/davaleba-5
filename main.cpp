#include <iostream>
using namespace std;


 int addTwo(){
    int add1 , add2 ;
    cout << "enter your two numbers:  "  << endl;  
    cin >> add1 >> add2 ;
    return add1+add2;
}



int main(){
    
    int i = addTwo() ;
    cout << i << endl;

      


    cin.get();
    return 0;
} 







