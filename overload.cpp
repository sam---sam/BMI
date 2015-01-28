#include <iostream>
#include <string>
using namespace std;

int add(int a,int b){return a+b;}
int add(double a,double b){return a+b;}
string add(string a,string b){return a+b;}

template <class T>
T adder(T a , T b){return a+b;}

int main (){

cout <<add(1,2)<<" , "<<add(2.0,2.3)<<" , "<<add("sam","sam")<<endl;
cout <<"************"<<endl;
cout <<adder<int>(1,2)<<" , "<<adder<double>(2.0,2.3)<<" , "<<adder<string>("sam","sam")<<endl;

return 0;}



