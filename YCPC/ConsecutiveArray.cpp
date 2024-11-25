#include <bits/stdc++.h>
using namespace std;


int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int tc;
    cin >> tc;

    while(tc--){

        int n;
        cin >> n;

        int arr[n];
        for(int i = 0; i < n; i++){

            cin >> arr[i];
        }

        //first sort===============
        sort(arr, arr+n);

        //second min max
        int mini = arr[0];
        int maxi = arr[n-1];

        //third length findout
        int len = maxi - mini + 1;


        int freq[200005] = {0};
        //fourth unique number
        for(int i = 0; i < n; i++){

            freq[arr[i]]++;
        }

        int uniquenum = 0;

        for(int i = mini; i <= maxi; i++){

            if(freq[i] != 0){
                uniquenum++;
            }
        }

        int operation = len - uniquenum;

        cout << operation << endl;





    }

    return 0;
}
