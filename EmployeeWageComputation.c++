#include<iostream>
using namespace std;
int main(){
    int Attendance;

    cout<<"Welcome to Employee Wage Computation Program..!!\n";

    cout<<"Enter the Employee Attendance : (0=Abesent) OR (1=Present) : ";
    cin>>Attendance;

    if(Attendance == 0){
        cout<<"Employee is Absent..!!"<<endl;
    }
    else{
        cout<<"Employee is Present..!!"<<endl;
    }
    
    return 0;
}