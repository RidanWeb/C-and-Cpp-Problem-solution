#include<bits/stdc++.h>

using namespace std;
int main() {
    // Write C++ code here

    //https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/W
    //60 = <;
    //61 = =;
    //62 = >;
    //42 = *;
    //43 = +;
    //45 = -;


    int a, b, c, sum;
    char sim, eq;

    cin >> a >> sim >> b >> eq >> c;

    int simNum = sim;

    if(simNum == 43){

        if((a+b) == c){

            cout << "Yes";
        }else{

            cout << a+b;
        }

    }else if(simNum == 45){

        if((a-b) == c){

            cout << "Yes";
        }else{

            cout << a-b;
        }

    }else if(simNum == 42){

        if((a*b) == c){

            cout << "Yes";
        }else{

            cout << a*b;
        }

    }




    return 0;
}
