#include <iostream>
using namespace std;

class student{
    protected:

    int id,phy,chem,math;
    string name;

      void details(){
        cout<<"Enter your name"<<endl;
        cin>>name;
        cout<<"Enter your roll number"<<endl;
        cin>>id;
        cout<<"Enter marks of physics"<<endl;
        cin>>phy;
        cout<<"Enter marks of chemistry"<<endl;
        cin>>chem;
        cout<<"Enter marks of maths"<<endl;
        cin>>math;
    }
};

class percent: private student{
     public:
    float m, p, c, aggPercent;
    
    void det()
    {
        details();
    }
      void Math()
    {
        
        m = (float)math / 80 * 100;
        cout << "\nMath Percentage = " << math;
    }
    void Phy()
    {
        p = (float)phy / 80 * 100;
        cout << "\nPhy Percentage = " << phy;
    }
    void Chem()
    {
        c = (float)chem / 80 * 100;
        cout << "\nChem Percentage = " << chem;
    }
        void AggPercent()
    {
        aggPercent = (phy+chem+math) / 3;
        cout << "\nAggregate Percentage = " << aggPercent;
    }
    

};

int main()
{
percent s1;
s1.det();
s1.Phy();
s1.Chem();
s1.Math();
s1.AggPercent();

return 0;
}