#include <iostream>
#include<string>
using namespace std;
void printText();
class TicTacToe 
{
    char arr[3][3];
    char player1Symbol, player2Symbol;
    string player1Name, player2Name;
    int playerTurn;

public:
    TicTacToe() 
    {
        for (int i = 0; i < 3; i++)
            for (int j = 0; j < 3; j++)
                arr[i][j] = ' ';
        playerTurn = 1;
    }

    void assignNameAndSymbol(char p1Symbol, char p2Symbol, string p1Name, string p2Name)
    {
        player1Name = p1Name;
        player2Name = p2Name;
        player1Symbol = p1Symbol;
        player2Symbol = p2Symbol;
    }

    bool winMatch()
    {
        if (arr[0][0] == arr[0][1] && arr[0][1] == arr[0][2] && arr[0][0] != ' ')
            return true;
        else if (arr[1][0] == arr[1][1] && arr[1][1] == arr[1][2] && arr[1][0] != ' ')
            return true;
        else if (arr[2][0] == arr[2][1] && arr[2][1] == arr[2][2] && arr[2][0] != ' ')
            return true;
        else if (arr[0][0] == arr[1][0] && arr[1][0] == arr[2][0] && arr[0][0] != ' ')
            return true;
        else if (arr[0][1] == arr[1][1] && arr[1][1] == arr[2][1] && arr[0][1] != ' ')
            return true;
        else if (arr[0][2] == arr[1][2] && arr[1][2] == arr[2][2] && arr[0][2] != ' ')
            return true;
        else if (arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2] && arr[0][0] != ' ')
            return true;
        else if (arr[2][0] == arr[1][1] && arr[1][1] == arr[0][2] && arr[2][0] != ' ')
            return true;
        else
            return false;
    }

    void board() 
    {
        cout << "\n\n\t\t\t\t\t\t     |     |     " << '\n';
        cout << "\t\t\t\t\t\t  " << getColorCode(arr[0][0]) << arr[0][0] << "\033[0m  |  " << getColorCode(arr[0][1]) << arr[0][1] << "\033[0m  |  " << getColorCode(arr[0][2]) << arr[0][2] << "\033[0m  " << '\n';
        cout << "\t\t\t\t\t\t_____|_____|____" << '\n';
        cout << "\t\t\t\t\t\t     |     |     " << '\n';
        cout << "\t\t\t\t\t\t  " << getColorCode(arr[1][0]) << arr[1][0] << "\033[0m  |  " << getColorCode(arr[1][1]) << arr[1][1] << "\033[0m  |  " << getColorCode(arr[1][2]) << arr[1][2] << "\033[0m  " << '\n';
        cout << "\t\t\t\t\t\t_____|_____|____" << '\n';
        cout << "\t\t\t\t\t\t     |     |     " << '\n';
        cout << "\t\t\t\t\t\t  " << getColorCode(arr[2][0]) << arr[2][0] << "\033[0m  |  " << getColorCode(arr[2][1]) << arr[2][1] << "\033[0m  |  " << getColorCode(arr[2][2]) << arr[2][2] << "\033[0m  " << '\n';
        cout << "\t\t\t\t\t\t     |     |     " << '\n' << endl;
    }

    string getColorCode(char mark) 
    {
        if (mark == player1Symbol) 
            return "\033[1;32m";  
        else if (mark == player2Symbol)
            return "\033[1;34m";  
        else 
            return "\033[1;37m";  
    }

    bool changeTurn(int row, int col) 
    {
        if (row < 0 || row > 2 || col < 0 || col > 2 || arr[row][col] != ' ')
            return false;

        arr[row][col] = (playerTurn == 1 ? player1Symbol : player2Symbol);
        playerTurn = 3 - playerTurn;
        return true;
    }

    bool drawMatch() 
    {
        for (int i = 0; i < 3; i++)
            for (int j = 0; j < 3; j++)
                if (arr[i][j] == ' ') 
                    return false;
        return true;
    }

    void playGame() 
    {
        while (true) 
        {
            system("CLS");
            printText();
            board();
            int turn;
            cout << "\t\t\033[1;31m" << (playerTurn == 1 ? player1Name : player2Name) << "'s turn. Enter turn (1-9): "; cin >> turn;
            cout << "\033[0m";
            int row = (turn - 1) / 3;
            int col = (turn - 1) % 3;
            if (!changeTurn(row, col)) 
            {
                cout << "\t\t\033[1;31mInvalid turn! Try again.\n" << system("pause");
                cout << "\033[0m";
                continue;
            }
            if (winMatch()) 
            {
                system("CLS");
                printText();
                board();
                cout << "\t\t\033[1;31m"<<(playerTurn == 1 ? player2Name : player1Name) << " WINS!!!\n";
                cout << "\033[0m";
                break;
            }
            if (drawMatch()) 
            {
                system("CLS");
                printText();
                board();
                cout << "\t\t\033[1;31mIt's a DRAW!\n";
                cout << "\033[0m";
                break;
            }
        }
    }
};

int main() 
{
    TicTacToe game;
    char playAgain, p1Symbol, p2Symbol;
    string p1Name, p2Name;
    printText();
    do
    {
        cout << "\n\n\t\t\033[1;35mEnter Player 1's Name: "; getline(cin, p1Name);
        cout << "\t\tEnter Player 1's Symbol (X/O): "; cin >> p1Symbol;
        while (p1Symbol != 'X' && p1Symbol != 'O')
        {
            cout << "\t\tInvalid Input! Please Enter (X/O): "; cin >> p1Symbol;
        }
        cout << "\033[0m";
        cout << "\t\t\033[1;33mEnter Player 2's Name: "; cin.ignore(); getline(cin, p2Name);
        cout << "\t\tEnter Player 2's Symbol (X/O): "; cin >> p2Symbol;
        while ((p2Symbol != 'X' && p2Symbol != 'O') || p1Symbol == p2Symbol)
        {
            if (p2Symbol == p1Symbol)
                cout << "\t\t" << p1Symbol << " has already been selected by " << p1Name;
            else
                cout << "\t\tInvalid Input!";
            cout << " Please Enter (X/O): ";  cin >> p2Symbol;
        }
        cout << "\033[0m";

        game.assignNameAndSymbol(p1Symbol, p2Symbol, p1Name, p2Name);

        game.playGame();
        cout << "\t\t\033[1;31mDo you want to play again? (Y/N): "; cin >> playAgain; cout << "\033[0m";
    } while (playAgain == 'Y' || playAgain == 'y');
    return 0;
}
void printText() 
{
    cout << "\033[1;31m         ___________  __     ______       ___________   __       ______       ___________  ______    _______\n";
    cout << "\033[1;32m         (\"     _   \")|\" \\   /\" _  \"\\     (\"     _   \") /\"\"\\     /\" _  \"\\     (\"     _   \")/    \" \\  /\"     \"|\n";
    cout << "\033[1;33m          )__/  \\\\__/ ||  | (: ( \\___)     )__/  \\\\__/ /    \\   (: ( \\___)     )__/  \\\\__/// ____  \\(: ______)\n";
    cout << "\033[1;34m             \\\\_ /    |:  |  \\/ \\             \\\\_ /   /' /\\  \\   \\/ \\             \\\\_ /  /  /    ) :)/\\    |\n";
    cout << "\033[1;35m             |.  |    |.  |  //  \\ _          |.  |  //  __'  \\  //  \\ _          |.  | (: (____/ // // ___)_\n";
    cout << "\033[1;36m             \\:  |    /\\  |\\(:   _) \\         \\:  | /   /  \\\\  \\(:   _) \\         \\:  |  \\        / (:      \"|\n";
    cout << "\033[1;37m              \\__|   (\\__|_)\\_______)         \\__|(___/    \\___)\\_______)         \\__|   \\\"_____/   \\_______)\n";
    cout << "\033[0m"; 
}