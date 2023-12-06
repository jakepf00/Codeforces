#include <bits/stdc++.h>

using namespace std;

int main() {
    int height, width, xPos, yPos;
    cin >> height >> width;
    char maze[height][width];
    string mappings("DLRU");
    string directions;
    int ans = 0;

    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            cin >> maze[i][j];
            if (maze[i][j] == 'S') {
                xPos = i;
                yPos = j;
            }
        }
    }

    cin >> directions;
    bool done;
    int xPosTemp, yPosTemp;

    do {
        // simulate map

        xPosTemp = xPos;
        yPosTemp = yPos;

        done = false;

        for (auto i : directions) {
            int movement = mappings[i-'0'];
            switch (movement) {
                case 'R': xPosTemp++; if (xPosTemp >= height) {done = true;} break;
                case 'L': xPosTemp--; if (xPosTemp < 0) {done = true;} break;
                case 'U': yPosTemp--; if (yPosTemp < 0) {done = true;} break;
                case 'D': yPosTemp++; if (yPosTemp >= width) {done = true;} break;
            }
	    if(done) {
                break;
            }
            if (maze[xPosTemp][yPosTemp] == '#') {
                done = true;
            }
            if (maze[xPosTemp][yPosTemp] == 'E') {
                ans++;
                done = true;
            }

            if(done) {
                break;
            }
        }

    } while (next_permutation(mappings.begin(), mappings.end()));

    cout << ans << endl;
}


