// basic converter and BMI calculator
#include "bmi.h";
#include <fstream>
#include <iomanip>
//write
void write(string name ,double bmi){
    ofstream myfile;
    myfile.open ("example.cvs");
        myfile << "Name "<<","<<"BMI "<<endl;
    myfile << name <<" , "<<bmi<<endl;
    myfile.close();

  };

  //read
/*
    void read(){
    string line;
    ifstream myfile1 ("example.txt");
    if (myfile1.is_open())
    {
        while ( getline (myfile1,line) )
        {
           // cout << line << '\n';
        }
        myfile1.close();
    }

};
*/
//
template <class T>
T getVal(string message ) {
    cout<<"================================================================================\n";
    cout <<message;
    T val;
    cin >> val;
    return val;
};







int main() {
    cout<<"================================================================================\n";
    cout<<"***************************** BMI Calculator ***********************************\n";
    cout<<"================================================================================\n";
    string name = getVal<string>("Enter your name : ");
    unsigned int age = getVal<unsigned int>("Enter your age : ");
    double height = getVal<double>("Enter your height(cm) : ");
    double weight = getVal<double>("Enter your weight(kg) : ");


    person person(name,age,height,weight);
    double bmi =person.getBmi(height , weight);
    person.toString(height,weight);
    cout <<person.getName()<<" your BMI is : "<<bmi;
    cout <<person.standing(bmi)<<endl;
    cout <<"\nYour ideal weight should be "<<person.ideal(weight)<<endl;
    write(name,bmi);
//
    return 0;
}
