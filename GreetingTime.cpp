#include <string.h>
#include <cstdlib>
#include <cstdio>
#include <ctime>
#include <cmath>
#include <fstream>
#include <iostream>
#include <sstream>
#include<bits/stdc++.h>
using namespace std;

#define MAX_LENGTH 256
string buffer;

int one_line(int poss) {
    int line_num = 0;
    srand(time(0));
    ifstream file;
    if(poss == 1){
        file.open("Mo.txt");}
    else if(poss == 2){
        file.open("Af.txt");}
    else{
        file.open("Ev.txt");}
    while (getline(file, buffer, '\n')) {
        if (buffer.find('#') != -1) {
            break;
        }
        line_num++;
    }
    int num = (rand() % (line_num - 1 + 1)) + 1;
    file.seekg(0, ios::beg);
    ostringstream out;
    out << num << "-";
    while (getline(file, buffer, '\n')) {
        if (buffer.find(out.str()) != -1) {
            break;
        }
    }
    num = floor(log10(num)) + 1;;
    cout << buffer.substr(num+1);
    file.close();
}
int main() {
    int Time_now;
    char option;
    char greet[20];
    time_t now = time(0);
    struct tm *ltm = localtime(&now);
    int hour = ltm->tm_hour;
    char *message[5] = { "Morning", "Afternoon", "Evening", "Night", "MidNight" };
    if (hour >= 5 && hour < 12) {
        strcpy(greet, message[0]);
        printf("\nHello, Good %s\nHave a Nice Day!!", greet);
        printf("\nMotivational Quote for you: ");
        one_line(1);//printing the quote
    }
    else if (hour >= 12 && hour < 17) {
        strcpy(greet, message[1]);
        printf("\nHi, Good %s\nHave a Nice Day!!", greet);
        printf("\nOne fact for you: ");
        one_line(2);//printing fact

    }
    else if (hour >= 17 && hour < 21) {
        strcpy(greet, message[2]);
        printf("\nHi, It's a Lovely %s\nHave a Nice Day!!", greet);
        printf("\nOne life hack for you: ");
        one_line(3);//printing life hack
    }
    else if (hour >= 21 && hour < 24) {
        strcpy(greet, message[3]);
        printf("\nHello, Good %s\nHave a Sweet Dream and Take Care!!", greet);
    }
    else {
        strcpy(greet, message[4]);
        printf("\nHi, It's %s\nHave a Peaceful Sleep!!", greet);
    }
    return 0;
}
