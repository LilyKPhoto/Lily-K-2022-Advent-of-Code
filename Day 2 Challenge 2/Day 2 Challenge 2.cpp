/*=====================
| DAY 2 - CHALLENGE 2 |
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
using namespace std;
int main() {
	cout << "Hi" << endl;
	return 0;
}