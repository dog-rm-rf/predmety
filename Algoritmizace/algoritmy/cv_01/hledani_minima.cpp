#include <iostream>
#include <vector>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;

int main(){

    srand(time(0)); 
    vector<int> pole = {rand() % 101, rand() % 101, rand() % 101};
    int min = pole[0];

    for(int i : pole){
        cout << i << ' ';
        if(min > i){
            min = i;
        }
    }
    cout << "the min is " << min;

    return 0;
}

// pocet porovnani je 3
