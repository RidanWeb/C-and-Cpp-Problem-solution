#include <bits/stdc++.h>
using namespace std;

class Student{

    public:
    string name;
    int cls;
    char section;
    int id;
    int mMark;
    int eMark;
};

bool compair(Student fst, Student sec){

    int totalMarkFirst = fst.mMark + fst.eMark;
    int totalMarkSecound = sec.mMark + sec.eMark;

    if(totalMarkFirst == totalMarkSecound){

        return fst.id < sec.id;

    }else{

        return totalMarkFirst > totalMarkSecound;
    }
}

int main()
{
    // Write your code here

    int n; cin >> n;

    Student std[n];

    for(int i = 0; i < n; i++){

        cin >> std[i].name >> std[i].cls >> std[i].section >> std[i].id >> std[i].mMark >> std[i].eMark;
    }

    sort(std, std+n, compair);

    for(int i = 0; i < n; i++){

        cout << std[i].name << " " << std[i].cls << " " << std[i].section << " " << std[i].id << " " << std[i].mMark << " " << std[i].eMark << endl;
    }



    return 0;
}
