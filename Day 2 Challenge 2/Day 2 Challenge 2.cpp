/*=====================
| DAY 2 - CHALLENGE 2 |
=====================*/

// Opponent Shapes:
//      Rock (A)
//      Paper (B)
//      Scissors (C)
// Player Shapes:
//      Rock     = +1 point
//      Paper    = +2 points
//      Scissors = +3 points
// Player Outcomes:
//      Need to Lose (X) = +0 point
//      Need to Draw (Y) = +3 points
//      Need to Win  (Z) = +6 points
// Outcomes:
//      Losing = +0 points
//      Drawing = +3 points
//      Winning = +6 points
// Input will look like:
//      A Y --> This would result in 4 points: Because the second character is 'Y', you need to draw (+3). 
//											   Against rock, you play rock (1 point)
//      B X --> This would result in 1 point:  Because the second character is 'X', you need to lose (+0). 
//											   Against paper, you play rock (1 point)
//      C Z --> This would result in 7 points: Because the second character is 'Z', you need to win (+6). 
//											   Against scissors, You play rock (1 point)
// All possible combinations and their outcomes:
//   Opponent plays A (Rock):
//      A X --> 3 points (Need to lose: +0 --> Play scissors: +3)
//      A Y --> 4 points (Need to draw: +3 --> Play rock: +1)
//      A Z --> 8 points (Need to win: +6 --> Play paper: +2)
//   Opponent plays B (Paper):
//      B X --> 1 point  (Need to lose: +0 --> Play rock: +1)
//      B Y --> 5 points (Need to draw: +3 --> Play paper: +2)
//      B Z --> 9 points (Need to win: +6 --> Play scissors: +3)
//   Opponent plays C (Scissors):
//      C X --> 2 points (Need to lose: +0 --> Play paper: +2)
//      C Y --> 6 points (Need to draw: +3 --> Play scissors: +3)
//      C Z --> 7 points (Need to win: +6 --> Play rock: +1) 
//      

#include <iostream>
#include <fstream>
#include <string>;
using namespace std;

int main()
{
    ifstream inputFile;
    inputFile.open("input.txt");
    string testStrLine;
    int totalScore = 0;

    // initializing string variables for each of the 3 possible A combinations:
    string AX = "A X"; // 3 points
    string AY = "A Y"; // 4 points
    string AZ = "A Z"; // 8 points

    // initializing string variables for each of the 3 possible B combinations:
    string BX = "B X"; // 1 points
    string BY = "B Y"; // 5 points
    string BZ = "B Z"; // 9 points

    // initializing string variables for each of the 3 possible B combinations:
    string CX = "C X"; // 2 points
    string CY = "C Y"; // 6 points
    string CZ = "C Z"; // 7 points
    while(getline(inputFile, testStrLine)) {
        // cout << testStrLine << endl;
        if (testStrLine == AX)
            totalScore += 3;
        else if (testStrLine == AY)
            totalScore += 4;
        else if (testStrLine == AZ)
            totalScore += 8;
        else if (testStrLine == BX)
            totalScore += 1;
        else if (testStrLine == BY)
            totalScore += 5;
        else if (testStrLine == BZ)
            totalScore += 9;
        else if (testStrLine == CX)
            totalScore += 2;
        else if (testStrLine == CY)
            totalScore += 6;
        else if (testStrLine == CZ)
            totalScore += 7;
        // cout << totalScore << "\n"; // should output 4 13 19
    }
    cout << totalScore << "\n";
    inputFile.close();
    return 0;
}
