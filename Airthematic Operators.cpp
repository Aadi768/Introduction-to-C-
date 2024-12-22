#include <iostream>
using namespace std;

char board[3][3] = { {'1','2','3'}, {'4','5','6'}, {'7','8','9'} };
char player = 'X';

void drawBoard() {
    cout << "Tic Tac Toe\n";
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
}

void playerTurn() {
    int choice;
    cout << "Player " << player << ", enter a number: ";
    cin >> choice;

    int row = (choice - 1) / 3;
    int col = (choice - 1) % 3;

    if(board[row][col] != 'X' && board[row][col] != 'O') {
        board[row][col] = player;
        player = (player == 'X') ? 'O' : 'X';
    } else {
        cout << "Invalid move, try again.\n";
        playerTurn();
    }
}

bool isGameOver() {
    // Check for win
    for(int i = 0; i < 3; i++) {
        if(board[i][0] == board[i][1] && board[i][1] == board[i][2])
            return true;
        if(board[0][i] == board[1][i] && board[1][i] == board[2][i])
            return true;
    }
    if(board[0][0] == board[1][1] && board[1][1] == board[2][2])
        return true;
    if(board[0][2] == board[1][1] && board[1][1] == board[2][0])
        return true;

    // Check for tie
    bool tie = true;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            if(board[i][j] != 'X' && board[i][j] != 'O') {
                tie = false;
            }
        }
    }
    return tie;
}

int main() {
    while(!isGameOver()) {
        drawBoard();
        playerTurn();
    }
    drawBoard();
    cout << "Game Over!\n";
    return 0;
}
