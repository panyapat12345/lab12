#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){

    cout << "Press Enter 3 times to reveal your future.";
    cin.get();
    cin.get();
    cin.get();
    
    srand(time(0));
    string grade;
    int i = rand()%9;

    switch(i){
        case 0:     grade = "A";    break;
        case 1:     grade = "B+";   break;
        case 2:     grade = "B";    break;
        case 3:     grade = "C+";   break;
        case 4:     grade = "C";    break;
        case 5:     grade = "D+";   break;
        case 6:     grade = "D";    break;
        case 7:     grade = "F";    break;
        case 8:     grade = "W";    break;
    }
    
    cout << "You will get " << grade << " in this 261102.";

    return 0;
}