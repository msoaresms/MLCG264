#include <time.h>
#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;

unsigned long long int a = 2685821657736338717;			     //Multiplicador
inline unsigned long long int RandD(unsigned long long int x){
    x = x * a;
    return x >> 32;
}

int main(){
    unsigned long long int x = time(NULL);

    for (int i = 0; i < 15; i++) {
        x = RandD(x);
        cout << x%100 << endl;
    }

    return 0;

}
