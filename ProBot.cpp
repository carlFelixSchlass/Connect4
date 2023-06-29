#include "ProBot.hpp"
#include "Field.hpp"
#include <iostream>
#include <string>

ProBot::ProBot(std::string name, char coin):
    Player(name, coin)
{
}

ProBot::~ProBot()
{

}
void ProBot::layCoin(Field& field)
{
    int rows = field.getRow();
    int cols = field.getColumn();
    char player2 = 'y';
    std::vector<std::vector<char>> board = field.getField();

    for (int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            if(board[i][j] != ' ' && board[i][j] != m_Coin)
            {
                player2 = board[i][j];
            }
        }
    }

    int bestCol = ProBot::minimax(field, field.getField(), 0, true, m_Coin, player2 , rows, cols);
    //int bestCol = ProBot::evaluateBoard(board, m_Coin, rows, cols);
    field.layCoin(bestCol+1, m_Coin);
}

// Minimax-Algorithmus
int ProBot::minimax(Field& field, std::vector<std::vector<char>>& board, int depth, bool isMaximizingPlayer, char maximizingPlayer, char minimizingPlayer, int ROWS, int COLS) {
   
    // Überprüfung, ob ein Spieler gewonnen hat oder das Spielbrett voll ist
    if (depth == 6 || ProBot::boardWin(board, maximizingPlayer, ROWS, COLS) || ProBot::boardWin(board, minimizingPlayer, ROWS, COLS) || ProBot::isBoardFull(board, ROWS, COLS)) {
        return ProBot::evaluateBoard(board, maximizingPlayer, ROWS, COLS);
    }

    if (isMaximizingPlayer) {
        int maxEval = -9999;
        for (int col = 0; col < COLS; ++col) {
            if (board[0][col] == ' ') {
                // Setze den Spielstein des maximierenden Spielers
                int row = ROWS - 1;
                while (row >= 0 && board[row][col] != ' ') {
                    --row;
                }
                board[row][col] = maximizingPlayer;

                // Rekursiver Aufruf des Minimax-Algorithmus für den nächsten Zug
                int eval = minimax(field, board, depth + 1, false, maximizingPlayer, minimizingPlayer, ROWS, COLS);
                maxEval = std::max(maxEval, eval);

                // Setze das Spielbrett wieder zurück
                board[row][col] = ' ';
            }
        }
        return maxEval;
    }
    else {
        int minEval = 9999;
        for (int col = 0; col < COLS; ++col) {
            if (board[0][col] == ' ') {
                // Setze den Spielstein des minimierenden Spielers
                int row = ROWS - 1;
                while (row >= 0 && board[row][col] != ' ') {
                    --row;
                }
                board[row][col] = minimizingPlayer;

                // Rekursiver Aufruf des Minimax-Algorithmus für den nächsten Zug
                int eval = minimax(field, board, depth + 1, false, maximizingPlayer, minimizingPlayer, ROWS, COLS);
                minEval = std::min(minEval, eval);

                // Setze das Spielbrett wieder zurück
                board[row][col] = ' ';
            }
        }
        return minEval;
    }
}



//kontrolliert ob Feld voll ist
bool ProBot::isBoardFull(const std::vector<std::vector<char>>& board, int ROWS, int COLS) {
    for (int col = 0; col < COLS; ++col) {
        if (board[0][col] == ' ') {
            return false;
        }
    }
    return true;
}

bool ProBot::boardWin( std::vector<std::vector<char>>& field, char x, int ROW, int COLUMN)
{
    // check horizontal
    for(int i = 0; i < ROW; i++){
        for (int j = 0; j < COLUMN - 3; j++){
            if (field[i][j] == x &&
                field[i][j + 1] == x &&
                field[i][j + 2] == x &&
                field[i][j + 3] == x){
                return true;
            }
        }
    }

    // check vertical
    for(int i = 0; i <= ROW - 4; i++){
        for (int j = 0; j < COLUMN; j++){
            if (field[i][j] == x &&
                field[i + 1][j] == x &&
                field[i + 2][j] == x &&
                field[i + 3][j] == x){
                return true;
            }
        }
    }

    // check diagonal LT -> RB
    for(int i = ROW-1; i >= 3; i--){
        for (int j = 0; j <= COLUMN - 4; j++){
            if (field[i][j] == x &&
                field[i - 1][j + 1] == x &&
                field[i - 2][j + 2] == x &&
                field[i - 3][j + 3] == x){
                return true;
            }
        }
    }

    // check diagonal RT -> LB
    for(int i = 0; i <= ROW - 4; i++){
        for (int j = 0; j <= COLUMN - 4; j++){
            if (field[i][j] == x &&
                field[i + 1][j + 1] == x &&
                field[i + 2][j + 2] == x &&
                field[i + 3][j + 3] == x){
                return true;
            }
        }
    }
    return false;
}

// Bewertungsfunktion (Heuristik)
int ProBot::evaluateBoard(const std::vector<std::vector<char>>& board, char player, int ROWS, int COLS) {
    int score = 0;
    char EMPTY = ' ';

    // Bewertung horizontaler Gewinnkombinationen
    for (int row = 0; row < ROWS; ++row) {
        for (int col = 0; col < COLS - 3; ++col) {
            int playerCount = 0;
            int emptyCount = 0;
            for (int k = 0; k < 4; ++k) {
                if (board[row][col + k] == player) {
                    playerCount++;
                } else if (board[row][col + k] == EMPTY) {
                    emptyCount++;
                }
            }
            if (playerCount == 4) {
                return 1000;  // Spieler hat gewonnen
            } else if (playerCount == 3 && emptyCount == 1) {
                score += 100;  // Spieler hat eine offene Dreierkombination
            } else if (playerCount == 2 && emptyCount == 2) {
                score += 10;  // Spieler hat eine offene Zweierkombination
            } else if (playerCount == 1 && emptyCount == 3) {
                score += 1;  // Spieler hat eine offene Einzelposition
            }
        }
    }

    // Bewertung vertikaler Gewinnkombinationen
    for (int col = 0; col < COLS; ++col) {
        for (int row = 0; row < ROWS - 3; ++row) {
            int playerCount = 0;
            int emptyCount = 0;
            for (int k = 0; k < 4; ++k) {
                if (board[row + k][col] == player) {
                    playerCount++;
                } else if (board[row + k][col] == EMPTY) {
                    emptyCount++;
                }
            }
            if (playerCount == 4) {
                return 1000;  // Spieler hat gewonnen
            } else if (playerCount == 3 && emptyCount == 1) {
                score += 100;  // Spieler hat eine offene Dreierkombination
            } else if (playerCount == 2 && emptyCount == 2) {
                score += 10;  // Spieler hat eine offene Zweierkombination
            } else if (playerCount == 1 && emptyCount == 3) {
                score += 1;  // Spieler hat eine offene Einzelposition
            }
        }
    }

    // Bewertung diagonaler Gewinnkombinationen (nach unten links)
    for (int row = 0; row < ROWS - 3; ++row) {
        for (int col = 0; col < COLS - 3; ++col) {
            int playerCount = 0;
            int emptyCount = 0;
            for (int k = 0; k < 4; ++k) {
                if (board[row + k][col + k] == player) {
                    playerCount++;
                } else if (board[row + k][col + k] == EMPTY) {
                    emptyCount++;
                }
            }
            if (playerCount == 4) {
                return 1000;  // Spieler hat gewonnen
            } else if (playerCount == 3 && emptyCount == 1) {
                score += 100;  // Spieler hat eine offene Dreierkombination
            } else if (playerCount == 2 && emptyCount == 2) {
                score += 10;  // Spieler hat eine offene Zweierkombination
            } else if (playerCount == 1 && emptyCount == 3) {
                score += 1;  // Spieler hat eine offene Einzelposition
            }
        }
    }

    // Bewertung diagonaler Gewinnkombinationen (nach unten rechts)
    for (int row = 0; row < ROWS - 3; ++row) {
        for (int col = 3; col < COLS; ++col) {
            int playerCount = 0;
            int emptyCount = 0;
            for (int k = 0; k < 4; ++k) {
                if (board[row + k][col - k] == player) {
                    playerCount++;
                } else if (board[row + k][col - k] == EMPTY) {
                    emptyCount++;
                }
            }
            if (playerCount == 4) {
                return 1000;  // Spieler hat gewonnen
            } else if (playerCount == 3 && emptyCount == 1) {
                score += 100;  // Spieler hat eine offene Dreierkombination
            } else if (playerCount == 2 && emptyCount == 2) {
                score += 10;  // Spieler hat eine offene Zweierkombination
            } else if (playerCount == 1 && emptyCount == 3) {
                score += 1;  // Spieler hat eine offene Einzelposition
            }
        }
    }

    return score;
}
