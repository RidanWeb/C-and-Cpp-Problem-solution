#include<bits/stdc++.h>
using namespace std;

class Student{

public:
    int id;
    char name[100];
    char sec;
    int mark;


};

int main(){



    int tc; cin >> tc;

    while(tc--){

        Student x[3];

        for (int i = 0; i < 3; ++i) {

            cin >> x[i].id >> x[i].name >> x[i].sec >> x[i].mark;
        }


        int resultId = 0;

        for (int i = 1; i < 3; ++i) {

            if (x[i].mark > x[resultId].mark || (x[i].mark == x[resultId].mark && x[i].id < x[resultId].id)){

                resultId = i;

            }
        }

        cout << x[resultId].id << " " << x[resultId].name << " " << x[resultId].sec << " " << x[resultId].mark << endl;

    }






    return 0;

}
