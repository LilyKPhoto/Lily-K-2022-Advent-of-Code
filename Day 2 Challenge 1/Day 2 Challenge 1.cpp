/*=====================
| DAY 2 - CHALLENGE 1 | 
=====================*/

// Opponent Shapes:
//      Rock (A)
//      Paper (B)
//      Scissors (C)
// Player Shapes:
//      Rock (X) = +1 point
//      Paper (Y) = +2 points
//      Scissors (Z) = +3 points
// Outcomes:
//      Losing = +0 points
//      Drawing = +3 points
//      Winning = +6 points
// Input will look like:
//      A Y --> This would result in 8 points (2 because of Paper (Y), and +6 because of the win)
//      B X --> This would result in 1 point  (1 because of Rock (X), and +0 because of the loss)
//      C Z --> This would result in 6 points (3 because of Scissors (Z), and +3 because of the draw)
// All possible combinations and their outcomes:
//   Opponent plays A (Rock):
//      A X --> 4 points (X = +1, Draw = +3)
//      A Y --> 8 points (Y = +2,  Win = +6)
//      A Z --> 3 points (Z = +3, Lose = +0)
//   Opponent plays B (Paper):
//      B X --> 1 point  (X = +1, Lose = +0)
//      B Y --> 5 points (Y = +2, Draw = +3)
//      B Z --> 9 points (Z = +3,  Win = +6)
//   Opponent plays C (Scissors):
//      C X --> 7 points (X = +1,  Win = +6)
//      C Y --> 2 points (Y = +2, Lose = +0)
//      C Z --> 6 points (Z = +3, Draw = +3) 
//      

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ifstream inputFile;
    inputFile.open("input.txt");
    string testStrLine;
    int totalScore = 0;

    // initializing string variables for each of the 3 possible A combinations:
    string AX = "A X"; // 4 points
    string AY = "A Y"; // 8 points
    string AZ = "A Z"; // 3 points

    // initializing string variables for each of the 3 possible B combinations:
    string BX = "B X"; // 1 points
    string BY = "B Y"; // 5 points
    string BZ = "B Z"; // 9 points

    // initializing string variables for each of the 3 possible B combinations:
    string CX = "C X"; // 7 points
    string CY = "C Y"; // 2 points
    string CZ = "C Z"; // 6 points
   while(getline(inputFile, testStrLine)) {
        // cout << testStrLine << endl;
        if (testStrLine == AX)
            totalScore += 4;
        else if (testStrLine == AY)
            totalScore += 8;
        else if (testStrLine == AZ)
            totalScore += 3;
        else if (testStrLine == BX)
            totalScore += 1;
        else if (testStrLine == BY)
            totalScore += 5;
        else if (testStrLine == BZ)
            totalScore += 9;
        else if (testStrLine == CX)
            totalScore += 7;
        else if (testStrLine == CY)
            totalScore += 2;
        else if (testStrLine == CZ)
            totalScore += 6;
        // cout << totalScore << endl; // should output 8 17 19 24 32
    }
    cout << totalScore << "\n";
    inputFile.close();
    return 0;
}
