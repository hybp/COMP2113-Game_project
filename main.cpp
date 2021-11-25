#include <iostream>
#include <string>
#include <fstream>
#include <climits>

using namespace std;

void introduction(string * name) {
    cout << "Can you tell me your name?\n";
    cin >> *name;
    cout << "Hello " << *name << "! Welcome to the University of Love and Peace!\n";
    cout << "Whether it be your GPA, friends, or lover.\n";
    cout << "Here, you can find what is lacking in your university life.\n";
    cout << "Just a gentle push of that enter key and your journey until Christmas will begin!\n";
    cout << ""
}

struct status {
    string c_name;
    int c_date;
    int c_time;
    char c_location;
    int c_aff_level;
    int c_int_level;
    double c_GPA;
    int c_health;
};

void load_stat(status stat_transfer) {
    //지난 정보 불러오기
    char filename[80];
    cin >> filename;
    ifstream loader;
    loader.open(filename);

    if (loader.fail()) {
        cout << "Error in loading the save file. Check the file, location or file name again" << endl;
        exit(1);
    }
    string line;
    int i = 0;

}

int main() {
    status current_stat;

    cout << "HB and King SH presents" << endl << "(Press enter/return to continue)";
    getchar();
    cout << "<Under the Mistletoe>";
    getchar();
    cout << "Hey you";
    getchar();
    cout <<  "Yes, you";
    getchar();
    cout << "You look familiar" << endl;
    cout << "(Enter 1 if you want to start from beginning)" << endl << "(Enter 2 if you wish to continue from previous progress)" << endl;
    
    int starter;
    cin >> starter;
    
    while (true) {
        if (starter == 1) {
            introduction(&current_stat.c_name);
            break;
        }
        else if (starter != 2) {
            cout << "Wrong input!" << endl;;
            cout << "(Enter 1 if you want to start from beginning)" << endl << "(Enter 2 if you wish to continue from previous progress)" << endl;
            while (cin.fail()) {
                cin.clear();
                cin.ignore(INT_MAX, '\n');
            }
            cin >> starter;
        }
        else {
            load_stat(current_stat);
            break;
        }
    }
    return 0;
}
