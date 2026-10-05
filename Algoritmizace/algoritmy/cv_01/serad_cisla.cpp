#include <iostream>
#include <vector>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;

int main(){

    srand(time(0)); 
    int a = rand() % 101;
    int b = rand() % 101;
    int c = rand() % 101;

    vector<int> pole = {a, b, c};
    if(a > b){
        if(a > c){
            if(b > c){
                cout << c << ' ' << b << ' ' << a;
            }
        }else{
            cout << b << ' ' << a << ' ' << c;
        }
    }else{

    }

    for(int x : pole){
        cout << x << ' ';
    }

    return 0;
}