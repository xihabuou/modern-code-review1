
bool isWin(char game[3][3]){ 

if (game[0][0] == game[0][1] && game[0][1] == game[0][2] ) || 

    (game[1][0] == game[1][1] && game[1][1] == game[1][2] ) || 

    (game[2][0] == game[2][1] && game[2][1] == game[2][2] ) || 

// column 

    (game[0][0] == game[1][0] && game[1][0] == game[2][0] ) || 

    (game[0][1] == game[1][1] && game[1][1] == game[2][1] ) || 

    (game[0][2] == game[1][2] && game[1][2] == game[2][2] ) || 

// diagonal 

  (game[0][0] == game[1][1] && game[1][1] == game[2][2] ) || 

  (game[0][2] == game[1][1] && game[1][1] == game[2][0] ) { 

       return true; 

     } 

return false; 

} 

 

int main(){ 

int i, j; 

char game[3][3] = {' '}; // Tic-tac-toe 

char player1 = 'X'; 

char player2 = 'O'; 

bool turn = true; // false for player 1's turn, true for player 2's turn. Player 1 first. 

cout << "X = Player 1" << endl << "O = Player 2" << endl; 

for (int n=0; n<9; n++){ 

turn = !turn;  // use the not-operator to change true to false or false to true. 

if (turn == false) 

cout << "Player 1: "; 

Else 

cout << "Player 2: "; 

cout << "Which cell to mark? i:[1..3], j:[1..3]: "; 

cin >> i >> j; 

if (turn == false) 

game[i][j] = 'X'; 

else  

game[i][j] = 'O'; 

if (isWin(game)){ 

cout << "Win!" << endl; 

break; // need to terminate the problem 

} 

} 

cout << "Tie!" << endl; 

// show the game to console 

cout << game[0][0] << " " << game[0][1] << " " << game[0][2] << endl; 

cout << game[1][0] << " " << game[1][1] << " " << game[1][2] << endl; 

cout << game[2][0] << " " << game[2][1] << " " << game[2][2] << endl; 

return 0; 

} 

