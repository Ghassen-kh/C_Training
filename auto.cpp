#include<iostream>
#include <typeinfo>
#include<vector>
using namespace std;
int auto_func (){
    return 25;
}
string auto_func2 (){
    return "ghassen";
}
int main (int argc, char ** argv ){
    auto a=auto_func(); // exact the same as if I just typed int a=auto_func()
    auto b=auto_func2();
    cout<<a<<endl;
    cout<<typeid(a).name()<<endl;
    cout<<b<<endl;
    cout<<typeid(b).name()<<endl; // here it returns i which is integer 
    // what auto does is that it declares an object of a type and it determines that type by how you initialize it !
    // You can declare auto variable when you don't know it's type actually 
    vector<int> i = {1,2,3,4,5,6,7,8};
    for (vector<int>::iterator it = i.begin();it<i.end();it ++){
        cout<<*it<<endl;
    }
    cout<<"========================================="<<endl;
    for (auto it = i.begin();it<i.end();it ++){
    cout<<*it<<endl;
    }
    return 0;
}