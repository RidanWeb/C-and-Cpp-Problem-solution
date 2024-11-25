#include<bits/stdc++.h>
using namespace std;


int main(){

    string myString;

    while(getline(cin, myString)){

        string tempString;

        for (int i = 0; i < myString.length(); i++) {

            if (myString[i] != ' ') {

                tempString += myString[i];
            }
        }

        sort(tempString.begin(), tempString.end());

        cout << tempString << endl;

    }


    return 0;

}
