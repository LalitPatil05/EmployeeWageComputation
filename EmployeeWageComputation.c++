#include<iostream>
using namespace std;
int main(){
    int Attendance;
    const int WagePerHour = 20;
    int DailyEmployeeWage = 0;
    const int WorkHour = 8;
    cout<<"Welcome to Employee Wage Computation Program..!!\n";

    cout<<"Enter the Employee Attendance : (0=Abesent) OR (1=Present) : ";
    cin>>Attendance;

    if(Attendance == 0){
        cout<<"Employee is Absent..!!"<<endl;
    }
    else{
        cout<<"Employee is Present..!!"<<endl;
    
    DailyEmployeeWage = WagePerHour * WorkHour;
    cout<<"Daily Employee Wage is : "<<DailyEmployeeWage<<endl;
    }

    return 0;
}