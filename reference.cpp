#include <iostream>
using namespace std;
int main (int argc, char ** argv){
    int i=5;
    int & ir=i;
    ir =10;
    cout<<"is is : "<<i<<endl;
    //there is no way to change the value of a reference variable once it's been set 
    // you cannot refer to a reference itself 
    // you cannot have an array of references 
    return 0;
}
