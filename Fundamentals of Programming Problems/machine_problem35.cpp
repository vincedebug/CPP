#include <iostream>
using namespace std;

int main(){
    
    char p1, p2;
    cout << "R for Rock\nP for paper\nS fot scissor: " << endl;
    cout << "Player1: ";
    cin >> p1;
    
    cout << "Player2: ";
    cin >> p2;
    
    if (p1 == p2) {
        cout << "NOBODY WINS";
    }
    // rock, paper
    else if (p1 == 'R' or 'r' && p2 == 'P' or 'p' ) {
        cout << "PAPER COVERS ROCK";
    }
    // paper, rock
    else if (p1 == 'P' or 'p' && p2 == 'R' or 'r') {
        cout << "PAPER COVERS ROCK";
    }
    // rock, scissor
    else if (p1 == 'R' or 'r' && p2 == 'S' or 's') {
        cout << " ROCK BREAKS SCISSORS";
    }
    // scissor, rock
    else if (p1 == 'S' or 's '&& p2 == 'R' or 'r') {
        cout << " ROCK BREAKS SCISSORS";
    }
    // paper, scissor
    else if (p1 == 'P' or 'p' && p2 == 'S' or 's') {
        cout << "SCISSORS CUT PAPER";
    }
   // scissor, paper
   else if (p1 == 'S' or 's'&& p2 == 'P' or 'p') {
        cout << "SCISSORS CUT PAPER";
   }
   else {
       cout << "invalid input";
   }
}
