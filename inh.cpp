#include<iostream>
using namespace std;

class Student
{
    public:
    int stuId, phy, chem, math, cs;
    string stuName;
    void Details()
    {
        cout << "Enter student details: \n";
        cout << "Enter Student ID: ";
        cin >> stuId;
        cout << "Enter Student Name: ";
        cin >> stuName;
        cout << "Enter Student's math marks outof 80: ";
        cin >> math;
        cout << "Enter Student's phy marks outof 80: ";
        cin >> phy;
        cout << "Enter Student's chem marks outof 80: ";
        cin >> chem;
        cout << "Enter Student's cs marks outof 80: ";
        cin >> cs;
    }
};
class Percent : public Student
{
    public:
    float m, p, ch, comp, aggPercent;
    void Math()
    {
        m = (float)math / 80 * 100;
        cout << "\nMath Percentage = " << m;
    }
    void Phy()
    {
        p = (float)phy / 80 * 100;
        cout << "\nPhy Percentage = " << p;
    }
    void Chem()
    {
        ch = (float)chem / 80 * 100;
        cout << "\nChem Percentage = " << ch;
    }
    void CS()
    {
        comp = (float)cs / 80 * 100;
        cout << "\nCS Percentage = " << cs;
    }
    void AggPercent()
    {
        aggPercent = (m + p + ch + comp) / 4;
        cout << "\nAggregate Percentage = " << aggPercent;
    }
};

void main()
{
    Percent stu;
    stu.Details();
    stu.Math();
    stu.Phy();
    stu.Chem();
    stu.CS();
    stu.AggPercent();
}

//...........Coded by Shreya Idate

 
