#ifndef UNIVERSAL_H
#define UNIVERSAL_H
#include <string>

struct status {
    int game_length;
    std::string name;
    int date;
    int sun;
    double affi_level[3];
    double inti_level[3];
    double GPA;
    int hp;
    std::string names[3];
};

#endif