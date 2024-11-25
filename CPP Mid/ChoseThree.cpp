#include<bits/stdc++.h>

using namespace std;


int getSumOrNot(int arr[], int n, int sum){


    for (int i = 0; i < n-2; i++) {

        for (int j = i+1; j < n-1; j++) {

            for (int k = j+1; k < n; k++) {

                if (arr[i] + arr[j] + arr[k] == sum) {

                    return 1;
                }
            }
        }
    }




    return 0;



}


int main(){

    // Write your code here

    int tc; cin >> tc;

    while(tc--){


        int n,  sum;
        cin >> n >> sum;

        int arr[n];

        for(int i = 0; i < n; i++){

            cin >> arr[i];

        }

        int result = getSumOrNot(arr, n, sum);

        if(result == 1){

            cout << "YES" << endl;

        }else{

            cout << "NO" << endl;

        }
    }



    return 0;

}
