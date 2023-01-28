#include <bits/stdc++.h>
#include <ctime>
using namespace std;

int main () {
    int Time_now;
    char option;
    string greet;
    
    time_t now = time(0);
    tm *ltm = localtime(&now);
    int hour = ltm->tm_hour;
    string message[5] = { "Morning", "Afternoon", "Evening", "Night", "MidNight" };
    
    if (hour >= 5 && hour < 12) {
        // Morning
        greet = message[0];
        cout << "Hello, Good " << greet << endl << "Have a Nice Day!!";
    }

    else if (hour >= 12 && hour < 17) {
        // Afternoon
        greet = message[1];
        cout << "Hi, Good " << greet << endl << "Have a Nice Day!!";
    }

    else if (hour >= 17 && hour < 21) {
        // Evening
        greet = message[2];
        cout << "Hi, It's a Lovely " << greet << endl << "Have a Nice Day!!";
    }

    else if (hour >= 21 && hour < 24) {
        // Night
        greet = message[3];
        cout << "Hello, Good " << greet << endl << "Have a Sweet Dream and Take Care!!";
    }

    else {
        // MidNight
        greet = message[4];
        cout << "Hi, It's " << greet << endl << "Have a Peaceful Sleep!!";
    }
    
    return 0;

}
