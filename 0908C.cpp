#include <bits/stdc++.h>

using namespace std;

double YPos(double, double, double);

int main() {
    cout << fixed;
    cout.precision(9);


    double radius;
    int disks;
    cin >> disks >> radius;
    double xPos[disks];
    double yPos[disks];

    for (int i = 0; i < disks; i++) {
        cin >> xPos[i];
        yPos[i] = 0;
    }

    yPos[0] = radius;
    for (int i = 1; i < disks; i++) {
        for (int j = i - 1; j >= 0; j--) {
            if (abs(xPos[i] - xPos[j]) <= (2 * radius)) {
                // calculate i based on j
                yPos[i] = max(yPos[i], YPos(abs(xPos[i] - xPos[j]), radius, yPos[j]));
            }
        }
    if (yPos[i] == 0) { yPos[i] = radius; }
    }

    for (int i = 0; i < disks; i++) {
        cout << yPos[i] << " ";
    }
    cout << endl;
}

double YPos(double xDist, double radius, double diskOnePos) {
    return sqrt((2 * radius) * (2 * radius) - ((xDist) * (xDist))) + diskOnePos;
}
