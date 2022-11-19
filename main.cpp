#include <iostream>
using namespace std;

char square[10] = {'o', '1', '2', '3', '4', '5', '6', '7', '8', '9'};

//function to return the game status

int checkwin(){
    if(square[1] == square[5] && square[5] == square[9]) return 1;
    if(square[3] == square[5] && square[5] == square[7]) return 1;
    for(int i = 0; i<3; i++){
        if(square[1+i*3] == square[2+3*i] && square[2+i*3] == square[3+i*3]) return 1;
    }
    for(int i = 0; i<3; i++){
        if(square[1+i] == square[4+i] && square[4+i] == square[7+i]) return 1;
    }
    return 0;
}

int main(){

    return 0;
}