
#include <iostream>
#include <time.h>
#include <string>
#include <cstdlib>
#include <time.h>
#include "garden.h"
#include "universal.h"
using namespace std;
// play.day
//play.period ==> 1. morning 2. afternoon 3. evening
//play.location ==> 0. Library 1. Garden 2. Student Cafeteria  3. Lecture Room
// Iris = [0], Olivia = [1], Daisy = [2]


void cafe(status* data, int* location){
  char choose;
  int input;
  char name;
  int run = 1;
  while(run == 1){
    int  inti_lev; int affi_lev; double gpa; int hp; int mood;
    if(init ==0){
      if(data == 2){
        int sel;
        cout << " You selected to come to Library." << endl;
        cout << " In Library, there is a higher probability for Iris to appear. Do you want to enter?" << endl;
        cout << " [1] Yes [2] No, I want to go back home [3]Badminton Club" << endl;
        cin >> sel;
        if(sel ==1){
          srand(time(0));
          int Iris_Appear = rand() % 100;
          if(Iris_Appear < 70){
            cout << " Iris appears on the library " << endl;
            getchar();
            cout << " You met Iris on Main library. " << endl;
            cout << " Since you and Iris feel so distracted from the noise " << endl;
            cout << " at the side study table playing League of Legend, "
            getchar();
            cout << " You may choose between three options: "<< endl;
            cout << " 1. Ask why she is crying. " << endl;
            cout << " 2. Comfort her without saying any word. " << endl;
            cout << " 3. Didn't recognize Olivia crying and look around Garden. " << endl;
            cout << "please enter a number from 1 to 3" << endl;
            cin >> input;
            if(input == 1){
              cout << "Olivia: life is hard cuz of too much of tests and assignments..." << endl;
              inti_lev[1] += 1;
            }
            else if(input == 2){
              cout << "Thank you for comforting me.." << endl;
              affi_lev[1] += 1;
            }
            else{
              cout << "(Nothing happens)" << endl;
              inti_lev[1] -= 1;
              affi_lev[1] -= 1;
            }
          }
          else if(Iris_Appear > 70 && Iris_Appear < 79){
            cout<< "Iris appears on the garden" << endl;
            getchar();
            cout << " 1. Take the flower to give her " << endl;
            cout << " 2. Since you consider every living thing a precious one, you keep walking to the garden " << endl;
            cout << " 3. Buy an Oreo Ice cream to her and walk with her on the Garden " << endl;
            cout << "please enter a number from 1 to 3" << endl;
            cin >> input;
            if(input == 1){
              cout << " Iris: (With impression) I liked this kind of flower..Thank you!!" << endl;
              affi_lev[0] += 1;
            }
            else if(input == 2){
              cout << " Iris: .... " << endl;
              inti_lev[0] -= 1;
              affi_lev[0] -= 1;
            }
            else{
              cout << " It is really nice of you for this Oreo icecream! let's walk around!! " << endl;
              inti_lev += 1;
            }
          }
          else if(Iris_Appear > 80 && Iris_Appear < 90){
            cout << "Daisy appears on the library" << endl;
            getchar();
            cout << " 1. Take the flower to give her " << endl;
            cout << " 2. Since you consider every living thing a precious one, you keep walking to the garden " << endl;
            cout << " 3. Buy an Oreo Ice cream to her and walk with her on the Garden " << endl;
            cout << "please enter a number from 1 to 3" << endl;
            cin >> input;
            if(input == 1){
              cout << " Daisy: (With impression) I liked this kind of flower..Thank you!!" << endl;
              affi_lev[2] += 1;
            }
            else if(input == 2){
              cout << " Daisy: .... " << endl;
              inti_lev[2] -= 1;
              affi_lev[2] -= 1;
            }
            else{
              cout << " It is really nice of you for this Oreo icecream! let's walk around!! " << endl;
              inti_lev[2] += 1;
            }
          }
          }
          else
          {
            cout << "Prof T.W. Chim appears" << endl;
            getchar();
            cout << " Not much time for the class until Christmas! " << endl;
            cout << " So, I prepare you guys with an easy level quiz! ‘cin’ is? " << endl;
            cout << " " << endl;
            cout << "1.	an Object " << endl;
            cout << "2. a Package " << endl;
            cout << "3.	a Class " << endl;
            cin >> input;
            if(input == 1)
            {
              cout << " Correct!!! You have gained 0.5 GPA points. " << endl;
              gpa += 0.5;
            }
            else if(input ==2)
            {
              cout << " Wrong! You have lost 0.5 GPA points. "   << endl;
              gpa -= 0.5;
            }
            else
            {
              cout << " Wrong! You have lost 0.5 GPA points. " << endl;
              gpa -= 0.5;
            }
            }
            hp -= 1;
          }
          else if(sel == 2){
            cout << "Going back home. " << endl;
            hp -= 1;
          }
          else if(sel == 3){
            cout << " You entered Badminton Club. " << endl;
            cout << " By playing badminton you can gain health point per match! " << endl;
            hp += 1;
          }




        cout << "-------------------showing the current status:---------------  " << endl;
        cout << " " << affi_lev << " " << inti_lev << " " << gpa << " " << hp << " " << endl;
        }
      }
    }
  }