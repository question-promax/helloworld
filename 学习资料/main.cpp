#include <iostream>
using namespace std;

class MyDate
{
public:
    MyDate(int Year=1900, int Month=1, int Day=1);
    MyDate(MyDate& d);
    bool isLeap(int y);
    int DaysOfYear();

    ~MyDate(){}


    void SetDate(int year, int month, int day);
    void ShowDate();
    void ShowDate2();
private:
    int Year;
    int Month;
    int Day;
};

MyDate::MyDate(MyDate & d){
    Year = d.Year, Month = d.Month, Day = d.Day;
}

inline void MyDate::SetDate(int Year, int month, int day)
{
    if(Year < 1900) this->Year = 1900;
    else (*this).Year = Year;
    this->Month = month;
    this->Day = day;
}

void MyDate::ShowDate()
{
    //cout<<this->Year<<"-"<<this->Month<<"-"<<this->Day;
    printf("%04d-%02d-%02d",this->Year,this->Month,this->Day);
}

void MyDate::ShowDate2()
{
    printf("%02d/%02d/%04d",this->Month,this->Day,this->Year);
}

MyDate::MyDate(int Year, int Month, int Day)
{
    this->SetDate(Year,Month,Day);
}


int main()
{
    MyDate d1;
    d1.ShowDate();
    cout<<'\n';
    d1.SetDate(2024,12,5);
    d1.ShowDate2();
    cout<<"\n-----------------\n";
    MyDate d2(2024,12,4);
    d2.ShowDate();
    return 0;
}
