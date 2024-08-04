#include <iostream>
using namespace std;

int main() {
    int glowy;
    int nogi;
    cin >> glowy;
    cin >> nogi;
    int krofki = (nogi - 2 * glowy) / 2;
    int czikeny = glowy - krofki;
    cout << czikeny << " " << krofki;
}