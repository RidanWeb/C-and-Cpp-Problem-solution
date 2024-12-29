#include <bits/stdc++.h>
using namespace std;

class Student{

    public:
    string name;
    int cls;
    char section;
    int id;
};

int main()
{
    // Write your code here

    int n; cin >> n;

    Student std[n];

    for(int i = 0; i < n; i++){

        cin >> std[i].name >> std[i].cls >> std[i].section >> std[i].id;
    }

    for (int i = 0; i < n / 2; ++i) {

        swap(std[i].section, std[n-i-1].section);
    }

    for(int i = 0; i < n; i++){

        cout << std[i].name << " " << std[i].cls << " " << std[i].section << " " << std[i].id << endl;
    }



    return 0;
}
