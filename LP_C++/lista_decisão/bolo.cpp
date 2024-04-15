#include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;

// Headers
string toString (double);
int toInt (string);
double toDouble (string);

int main() {
    int farinha;
    int ovo;
    int leite;
    int qntMaxima;
    int bolo[2];

    cin >> farinha;
    cin >> ovo;
    cin >> leite;
    bolo[0] = (int) ((double) farinha / 2);
    bolo[1] = (int) ((double) ovo / 3);
    bolo[2] = (int) ((double) leite / 5);
    qntMaxima = bolo[0];
    for (int i = 0; i <= 2; i++) {
        if (qntMaxima > bolo[i]) {
            qntMaxima = bolo[i];
        }
    }
    cout << qntMaxima << endl;
    return 0;
}

// The following implements type conversion functions.
string toString (double value) { //int also
    stringstream temp;
    temp << value;
    return temp.str();
}

int toInt (string text) {
    return atoi(text.c_str());
}

double toDouble (string text) {
    return atof(text.c_str());
}
