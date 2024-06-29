// #include<bits/stdc++.h>
// using namespace std;
// class Student {
// public:
//   string nm;
//   int cls;
//   char s;
//   int id;

//   Student(string nm, int cls, char s, int id)
//   {
//     this->nm = nm;
//     this->cls = cls;
//     this->s = s;
//     this->id = id;
//   }
// };

// int main()
//  {
//   int n;
//   cin >> n;

//   Student st [n];

//   // Read student data
//   for (int i = 0; i < n; ++i) {
//     cin >> st[i].nm >> st[i].cls >> st[i].s >> st[i].id;
//   }

//   // Reverse the sections
//   for (int i = 0; i < n / 2; ++i) {
//     swap(st[i].s, st[n - 1 - i].s); // Use swap function for efficient exchange
//   }

//   // Print student data after reversing sections
//  for (Student& student : st)
//   { 
//     cout << student.nm << " " << student.cls << " " << student.s << " " << student.id << endl;
//   }

//   return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;

// struct Student {
//     string nm;
//     int cls;
//     char s;
//     int id;
// };


// void swapSections(Student& student1, Student& student2) {
//     char temp = student1.s;
//     student1.s = student2.s;
//     student2.s = temp;
// }

// int main() {
//     int N;
//     cin >> N;

   
//     Student students[N];

//     for (int i = 0; i < N; ++i) {
//         cin >> students[i].nm >> students[i].cls >> students[i].s >> students[i].id;
//     }

    
//     int left = 0, right = N - 1;
//     while (left < right) {
//         swapSections(students[left], students[right]);
//         left++;
//         right--;
//     }

    
//     for (int i = 0; i < N; ++i) {
//         cout << students[i].nm << " " << students[i].cls << " " << students[i].s << " " << students[i].id << endl;
//     }

//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;
struct Student {
    string nm;
    int cls;
    char s;
    int id;
};
int main()
{
    int n;
    cin >> n;
    Student a[n];

    for (int i = 0; i < n; ++i)
    {
        cin >> a[i].nm >> a[i].cls >> a[i].s >>a[i].id;
    }

    for (int i = 0; i < n / 2; i++) 

    {
        swap(a[i].s, a[n - i - 1].s);
    }

     for (int i = 0; i < n; ++i)

    {
        cout <<a[i].nm << " " << a[i].cls << " " << a[i].s << " " << a[i].id << endl;
    }


    return 0;
}
