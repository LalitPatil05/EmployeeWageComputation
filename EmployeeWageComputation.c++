#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
class EmployeeWageCompute{

    public:
    int WagePerHour;
    int DailyEmployeeWage = 0;
    int Attendance;
    int EmployeeType;
    const int FULL_TIME_HOUR = 8;
    const int PART_TIME_HOUR = 4;
    int TotalWage = 0;
    int WorkingHour = 0;
    int WorkingDays = 1;
    int MonthlyDay;
    int MonthlyHour;

            EmployeeWageCompute(int WagePerHour,int MonthlyDay,int MonthlyHour){
                this->WagePerHour = WagePerHour;
                this->MonthlyDay = MonthlyDay;
                this->MonthlyHour = MonthlyHour;
            }

        int EmployeeWageCalc() {

        srand(time(time_t()));

    cout<<"Welcome to Employee Wage Computation Program..!!\n";
   
   while(WorkingHour <= MonthlyHour && WorkingDays <= MonthlyDay) {
    
            Attendance = rand() % 2;
            EmployeeType = rand() % 2;

            cout<<"Day : "<<WorkingDays<<endl;
    
            switch(Attendance){
            case 0:
            cout<<"Employee is Absent..!!"<<endl;
            break;

            case 1:
            cout<<"Employee is Present..!!"<<endl;

            switch(EmployeeType){
            
            case 0:

            cout<<"Employee is Part Time..!!"<<endl;
            DailyEmployeeWage = WagePerHour * PART_TIME_HOUR;
            cout<<"Employee Part Time Wage is : "<<DailyEmployeeWage<<endl;
            WorkingHour += PART_TIME_HOUR;
            break;

            case 1:

            cout<<"Employee is Full Time..!!"<<endl;
            DailyEmployeeWage = WagePerHour * FULL_TIME_HOUR;
            cout<<"Employee Full Time Wage is : "<<DailyEmployeeWage<<endl;
            WorkingHour += FULL_TIME_HOUR;
            break;
        }
            TotalWage += DailyEmployeeWage;
    }
            cout<<"Total Working Hours is : "<<WorkingHour<<endl;
            cout<<"--------------------------------------------------\n";
            WorkingDays++;
}   
            cout<<"Total Monthly Working Hours is : "<<WorkingHour<<endl;
            cout<<"Total Monthly Wage is : "<<TotalWage<<endl;

    }
};
int main(){

    EmployeeWageCompute employeewagecompute(20,20,50);
    employeewagecompute.EmployeeWageCalc();
    return 0;

}
    