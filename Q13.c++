#include<iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    
    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= n; j++) {

            if ((i == 1 && j % 4 == 1) ||
                (i == 2 && j % 2 == 1) ||
                (i == 3 && j % 4 == 3))
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }

    return 0;
}