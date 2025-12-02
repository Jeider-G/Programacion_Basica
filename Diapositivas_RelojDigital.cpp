#include <iostream>
#include <iomanip>  
using namespace std;

int main() {

    for (int h = 0; h < 24; h++) {
        for (int m = 0; m < 60; m++) {
            for (int s = 0; s < 60; s++) {
                cout << setw(2) << setfill('0') << h << ":"
                     << setw(2) << setfill('0') << m << ":"
                     << setw(2) << setfill('0') << s << endl;
            }
        }
    }

    return 0;
}
