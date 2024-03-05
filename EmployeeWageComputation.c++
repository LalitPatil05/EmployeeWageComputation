#include<iostream>
using namespace std;
int main(){

    int Attendance;
    const int WagePerHour = 20;
    int DailyEmployeeWage = 0;
    const int FULL_TIME_HOUR = 8;
    const int PART_TIME_HOUR = 4;
    int EmployeeType;
    
    cout<<"Welcome to Employee Wage Computation Program..!!\n";

    cout<<"Enter the Employee Attendance : (0=Abesent) OR (1=Present) : ";
    cin>>Attendance;

    if(Attendance == 0){
        cout<<"Employee is Absent..!!"<<endl;
    }
    else{
        cout<<"Employee is Present..!!"<<endl;
    
        cout<<"Enter the Employee Type : (0=PartTime) OR (1=FullTime) : ";
        cin>>EmployeeType;

        if(EmployeeType==0){
            cout<<"Employee is Part Time..!!"<<endl;
            DailyEmployeeWage = WagePerHour * PART_TIME_HOUR;
            cout<<"Employee Part Time Wage is : "<<DailyEmployeeWage<<endl;
        }
        else{
            cout<<"Employee is Full Time..!!"<<endl;
            DailyEmployeeWage = WagePerHour * FULL_TIME_HOUR;
            cout<<"Employee Full Time Wage is : "<<DailyEmployeeWage<<endl;
        }
    }

    return 0;
}