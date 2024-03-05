#include<iostream>
#include<cstdlib>
using namespace std;
int main(){

    const int WagePerHour = 20;
    int DailyEmployeeWage = 0;
    const int FULL_TIME_HOUR = 8;
    const int PART_TIME_HOUR = 4;
    const int WORKING_DAYS = 20;
    int TotalWage = 0;
    int srand(9);
    
    cout<<"Welcome to Employee Wage Computation Program..!!\n";

    for(int i = 1 ; i <= WORKING_DAYS ; i++){
        cout<<"Day : "<<+i<<endl;
    
    switch(rand()%2){
        case 0:
        cout<<"Employee is Absent..!!"<<endl;
        break;

        case 1:
        cout<<"Employee is Present..!!"<<endl;

        switch(rand()%2){
            case 0:
            cout<<"Employee is Part Time..!!"<<endl;
            DailyEmployeeWage = WagePerHour * PART_TIME_HOUR;
            cout<<"Employee Part Time Wage is : "<<DailyEmployeeWage<<endl;
            break;

            case 1:
            cout<<"Employee is Full Time..!!"<<endl;
            DailyEmployeeWage = WagePerHour * FULL_TIME_HOUR;
            cout<<"Employee Full Time Wage is : "<<DailyEmployeeWage<<endl;
            break;
        }
            TotalWage += DailyEmployeeWage;
    }
            cout<<"--------------------------------------------------\n";

    }
        cout<<"Total Monthly Wage is : "<<TotalWage<<endl;
        
        return 0;
}