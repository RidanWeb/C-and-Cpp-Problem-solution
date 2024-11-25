#include<bits/stdc++.h>
using namespace std;

int main(){

    string a;
    cin >> a;

    if((a[0] >= '0') && (a[0] <= '9')){

        cout << "IS DIGIT";

    }else{

        cout << "ALPHA" << endl;

        if(a[0] >= 'a' && a[0] <= 'z'){

            cout << "IS SMALL";
        }else{

            cout << "IS CAPITAL";
        }
    }

    return 0;

}
