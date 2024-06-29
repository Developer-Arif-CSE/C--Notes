// #include<bits/stdc++.h>
// using namespace std;
// class Student
// {
//     public:
//     int roll;
//     int cls;
//     double gpa;
//     Student(int r, int c, double g)
//     {
//         roll=r;
//         cls=c;
//         gpa=g;
//     }
    
// };
// int main()
// {
//     Student rahim( 19,8,5.01);
//     Student karim( 20,9,4.33);
//     cout<<rahim.roll<<" "<<rahim.cls<<" "<<rahim.gpa<<endl;
//     cout<<karim.roll<<" "<<karim.cls<<" "<<karim.gpa<<endl;

//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
    int roll;
    int cls;
    double gpa;
    Student(int roll, int cls, double gpa)
    {
      this->roll=roll;
      this->cls=cls;
      this->gpa=gpa;
    }
    
};
int main()
{
    Student rahim( 19,8,5.01);
    Student karim( 20,9,4.33);
    cout<<rahim.roll<<" "<<rahim.cls<<" "<<rahim.gpa<<endl;
    cout<<karim.roll<<" "<<karim.cls<<" "<<karim.gpa<<endl;

    return 0;
}
