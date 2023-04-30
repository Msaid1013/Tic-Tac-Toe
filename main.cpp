#include <iostream>

char board[3][3] = { '1', '2', '3', '4', '5', '6', '7', '8', '9' };
std::string Player1, Player2;
char player = 'X';

void output() {
  std::cout << "     |     |      \n";
 
std::cout << "  " << board[0][0] << "  |  " << board[0][1] << "  |  " << board[0][2] << "\n";
 
  std::cout << "_____|_____|_____ \n";
  std::cout << "     |     |      \n";
 
  std::cout << "  " << board[1][0] << "  |  " << board[1][1] << "  |  " << board[1][2] << "\n";
 
  std::cout << "_____|_____|_____ \n";
  std::cout << "     |     |      \n";
 
  std::cout << "  " << board[2][0] << "  |  " << board[2][1] << "  |  " << board[2][2] << "\n";
  std::cout << "     |     |      \n";
 
  std::cout << "\n";
}

void greet() {
  std::cout << "Tic-Tac-Toe!" << "\n";
    
  std::cout << "Who is Player 1?\n";
  std::cin >> Player1;
  std::cout<< "Who is Player 2?\n";
  std::cin >> Player2;
  
  std::cout << Player1 << ", you are going to be X\n";
  std::cout << Player2 << ", you are going to be O\n";

}

void input() {
    int move;
    std::cout << "Go!" << "\n";
    std::cin >> move;

    if (move == 1)
    board[0][0] = player;
    else if (move == 2)
        board[0][1] = player;
    else if (move == 3)
        board[0][2] = player;
    else if (move == 4)
        board[1][0] = player;
    else if (move == 5)
        board[1][1] = player;
    else if (move == 6)
        board[1][2] = player;
    else if (move == 7)
board[2][0] = player;
    else if (move == 8)
        board[2][1] = player;
    else if (move == 9)
        board[2][2] = player;
}
void toggle_player() {
    if (player == 'X')
        player = 'O';
    else
        player = 'X';
}
char win() {
    if (board[0][0] == 'X' && board[0][1] == 'X' && board[0][2] == 'X')
        return 'X';
    if (board[1][0] == 'X' && board[1][1] == 'X' && board[1][2] == 'X')
        return 'X';
    if (board[2][0] == 'X' && board[2][1] == 'X' && board[2][2] == 'X')
        return 'X';

    if (board[0][0] == 'X' && board[1][0] == 'X' && board[2][0] == 'X')
        return 'X';
    if (board[0][1] == 'X' && board[1][1] == 'X' && board[2][1] == 'X')
        return 'X';
    if (board[0][2] == 'X' && board[1][2] == 'X' && board[2][2] == 'X')
        return 'X';

    if (board[0][0] == 'X' && board[1][1] == 'X' && board[2][2] == 'X')
        return 'X';
    if (board[2][0] == 'X' && board[1][1] == 'X' && board[0][2] == 'X')
        return 'X';

    if (board[0][0] == 'O' && board[0][1] == 'O' && board[0][2] == 'O')
        return 'O';
    if (board[1][0] == 'O' && board[1][1] == 'O' && board[1][2] == 'O')
return 'O';
    if (board[2][0] == 'O' && board[2][1] == 'O' && board[2][2] == 'O')
        return 'O';

    if (board[0][0] == 'O' && board[1][0] == 'O' && board[2][0] == 'O')
        return 'O';
    if (board[0][1] == 'O' && board[1][1] == 'O' && board[2][1] == 'O')
        return 'O';
    if (board[0][2] == 'O' && board[1][2] == 'O' && board[2][2] == 'O')
        return 'O';

    if (board[0][0] == 'O' && board[1][1] == 'O' && board[2][2] == 'O')
        return 'O';
    if (board[2][0] == 'O' && board[1][1] == 'O' && board[0][2] == 'O')
        return 'O';
}
int main() {
    greet();
    output();
    while (1)
    {
        input();
        output();
        if (win() == 'X')
        {
            std::cout << Player1 << " wins!" << "\n\n\n";
            
            std::cout << "⠀⠀⠀⠀⠀⠀⠀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << "\n";
            std::cout << "⠀⠀⠀⠀⠀⠀⠠⢿⣿⠇⠀⠀⠀⣴⣦⠀⠀⠀⠀⠀⠀⠀⠀⣀⣤⠀⠸⠿⠀⠀" << "\n";
            std::cout << "⠀⠀⠀⠀⠀⠀⠀⠀⠁⢠⡄⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⣤⣼⣯⣅⠀⠀⠀⠀⠀" << "\n";
            std::cout << "⠀⠀⠀⠀⢀⣤⡀⠀⠀⠀⠹⣆⠀⠀⠀⠀⠀⠀⣠⠞⠋⣿⡇⢀⣽⠇⠀⠀⠀⠀" << "\n";
            std::cout << "⠀⠀⠀⠀⠘⠛⠃⠀⢤⣤⣤⣿⣦⠀⠀⠀⠀⣰⣏⣀⡀⠘⠛⠛⠉⠀⠀⠀⠀⠀" << "\n";
            std::cout << "⠀⠀⠀⠀⠀⠀⠀⠀⠈⢿⡄⠀⠀⠀⢀⣴⢾⣿⠉⠉⣿⠀⠀⠀⠐⣾⣷⠄⠀⠀" << "\n";
            std::cout << "⠀⠀⠀⠀⠀⠀⠀⠀⠈⢿⡄⠀⠀⠀⢀⣴⢾⣿⠉⠉⣿⠀⠀⠀⠐⣾⣷⠄⠀⠀" << "\n";
            std::cout << "⠀⠀⠀⠀⠀⠀⢀⣀⣀⠀⠀⠀⠀⠀⣾⠃⠀⠻⣶⠾⠋⠀⠀⠀⠈⠈⠁⠀⠀⠀" << "\n";
            std::cout << "⠀⠀⠀⠀⠀⠀⢻⣿⣿⣿⣶⣄⠀⠸⠏⠀⠀⠀⠀⠀⢀⡀⠀⠀⠀⠀⠀⢀⡀⠀" << "\n";
            std::cout << "⠀⠀⠀⠀⠀⣦⠈⢿⣿⣿⣿⣿⣷⣄⠀⠀⠀⣤⡀⢠⡿⠻⣦⣀⣠⣴⠾⠛⠁⠀" << "\n";
            std::cout << "⠀⠀⠀⠀⠸⣿⣷⣄⠻⣿⣿⣿⣿⣿⣷⡄⠀⠈⠻⠟⠁⠀⠈⠉⠁⠀⠀⠀⠀⠀" << "\n";
            std::cout << "⠀⠀⠀⠀⣄⠙⠻⣿⣷⣌⠻⣿⣿⣿⣿⣿⡄⠀⠀⠀⢠⣶⡄⠀⠀⠀⠀⠀⠀⠀" << "\n";
            std::cout << "⠀⠀⠀⠸⣿⣿⣦⣈⠙⠿⣷⣄⠙⠻⠿⣿⠇⠀⠀⠀⠀⠉⠀⠀⠀⠀⠀⠀⠀⠀" << "\n";
            std::cout << "⠀⠀⢠⣦⣈⠙⠿⣿⣷⣦⡄⠉⠛⠂⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << "\n";
            std::cout << "⠀⠀⣼⠿⠿⠛⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << "\n";

            break;
        }
        else if (win() == 'O')
        {
            std::cout << Player2 << " wins!" << "\n\n\n";
            
            std::cout << "⠀⠀⠀⠀⠀⠀⠀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << "\n";
            std::cout << "⠀⠀⠀⠀⠀⠀⠠⢿⣿⠇⠀⠀⠀⣴⣦⠀⠀⠀⠀⠀⠀⠀⠀⣀⣤⠀⠸⠿⠀⠀" << "\n";
            std::cout << "⠀⠀⠀⠀⠀⠀⠀⠀⠁⢠⡄⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⣤⣼⣯⣅⠀⠀⠀⠀⠀" << "\n";
            std::cout << "⠀⠀⠀⠀⢀⣤⡀⠀⠀⠀⠹⣆⠀⠀⠀⠀⠀⠀⣠⠞⠋⣿⡇⢀⣽⠇⠀⠀⠀⠀" << "\n";
            std::cout << "⠀⠀⠀⠀⠘⠛⠃⠀⢤⣤⣤⣿⣦⠀⠀⠀⠀⣰⣏⣀⡀⠘⠛⠛⠉⠀⠀⠀⠀⠀" << "\n";
            std::cout << "⠀⠀⠀⠀⠀⠀⠀⠀⠈⢿⡄⠀⠀⠀⢀⣴⢾⣿⠉⠉⣿⠀⠀⠀⠐⣾⣷⠄⠀⠀" << "\n";
            std::cout << "⠀⠀⠀⠀⠀⠀⠀⠀⠈⢿⡄⠀⠀⠀⢀⣴⢾⣿⠉⠉⣿⠀⠀⠀⠐⣾⣷⠄⠀⠀" << "\n";
            std::cout << "⠀⠀⠀⠀⠀⠀⢀⣀⣀⠀⠀⠀⠀⠀⣾⠃⠀⠻⣶⠾⠋⠀⠀⠀⠈⠈⠁⠀⠀⠀" << "\n";
            std::cout << "⠀⠀⠀⠀⠀⠀⢻⣿⣿⣿⣶⣄⠀⠸⠏⠀⠀⠀⠀⠀⢀⡀⠀⠀⠀⠀⠀⢀⡀⠀" << "\n";
            std::cout << "⠀⠀⠀⠀⠀⣦⠈⢿⣿⣿⣿⣿⣷⣄⠀⠀⠀⣤⡀⢠⡿⠻⣦⣀⣠⣴⠾⠛⠁⠀" << "\n";
            std::cout << "⠀⠀⠀⠀⠸⣿⣷⣄⠻⣿⣿⣿⣿⣿⣷⡄⠀⠈⠻⠟⠁⠀⠈⠉⠁⠀⠀⠀⠀⠀" << "\n";
            std::cout << "⠀⠀⠀⠀⣄⠙⠻⣿⣷⣌⠻⣿⣿⣿⣿⣿⡄⠀⠀⠀⢠⣶⡄⠀⠀⠀⠀⠀⠀⠀" << "\n";
            std::cout << "⠀⠀⠀⠸⣿⣿⣦⣈⠙⠿⣷⣄⠙⠻⠿⣿⠇⠀⠀⠀⠀⠉⠀⠀⠀⠀⠀⠀⠀⠀" << "\n";
            std::cout << "⠀⠀⢠⣦⣈⠙⠿⣿⣷⣦⡄⠉⠛⠂⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << "\n";
            std::cout << "⠀⠀⣼⠿⠿⠛⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << "\n";
            break;
        }
        toggle_player();
    }
    return 0;
}
