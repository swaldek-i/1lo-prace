#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main(){
    int naj = 0, n, temp;
    vector <int> liczby(0);
    while(n != 0){
        cin >> n;
        liczby.push_back(n);
    }
    for (int i = 0; i < liczby.size()-1; i++){
        temp = liczby[i];
        for (int j = i+1; j < liczby.size(); j++){
            temp += liczby[j];
            if (naj < temp)
            {
                naj = temp;
            }
        }
    }
    cout << naj;
}