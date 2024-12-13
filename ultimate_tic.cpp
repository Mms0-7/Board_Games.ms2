//#include <iostream>
//#include <iomanip>
//#include "BoardGame_Classes.h"
//#include <cctype>
//using namespace std;
////int ultimate_tic::counter = 0;
//int p1_p2=1;
//
//int turn= 1;
//struct fkp1{
//    string sym;
//    fkp1(string s):sym(s){}
//};
//fkp1 p1("X");
//fkp1 p2("O");
//class ultimate_tic : public Board<string> {
//public:
//
//    ultimate_tic() {
//        this->rows = this->columns = 3;
//        this->board = new string *[this->rows];
//        for (int i = 0; i < this->rows; i++) {
//            this->board[i] = new string [this->columns];
//            for (int j = 0; j < this->columns; j++) {
//                this->board[i][j] = "*";
//            }
//        }
//        this->n_moves = 0;
//    }
//    ultimate_tic(int n) {
//        int counter = 1;
//        this->rows = this->columns = 3;
//        this->board = new string *[this->rows];
//        for (int i = 0; i < this->rows; i++) {
//            this->board[i] = new string [this->columns];
//            for (int j = 0; j < this->columns; j++) {
//                this->board[i][j] = "b" + std::to_string(counter);
//                counter++;
//            }
//        }
//        this->n_moves = 0;
//    }
//
//    // Destructor
//    ~ultimate_tic() {
//        for (int i = 0; i < 3; ++i) {
//            delete[] board[i];
//        }
//        delete[] board;
//    }
//
//    // Update board with move
//    bool update_board(int x, int y, string symbol) override {
//        cout<<"x "<<x<<" y "<<y<<endl;
//        if (x >= 0 && x < 3 && y >= 0 && y < 3 && (board[x][y] == "*" ||  board[x][y]=="b1"||  board[x][y]=="b2"||  board[x][y]=="b3"||  board[x][y]=="b4"||  board[x][y]=="b5"||  board[x][y]=="b6"||  board[x][y]=="b7"||  board[x][y]=="b8"||  board[x][y]=="b9")) {
//            cout<<"xx "<<x<<" yy "<<y<<endl;
//            cout<<"turn"<<turn<<endl;
//            if (turn>0){
//                board[x][y] = "X";
//                n_moves++;
//                cout<<"59  p1p2"<<p1_p2<<endl;
//                return true;
//            }
//            else{
//                board[x][y] = "O";
//                n_moves++;
//                cout<<"65   p1p2"<<p1_p2<<endl;
//                return true;
//            }
//
//
//
//
//        }
//        cout<<"xxx "<<x<<" yyy "<<y<<endl;
//         if(x==1234&&y==4321){
//            p1_p2++;
//            turn*=-1;
//            cout<<"75   p1p2"<<p1_p2<<endl;
//            return true;
//        }
//
//        return false;
//    }
//
//    // Display the board
//    void display_board() override {
//
//        for (int i = 0; i < this->rows; i++) {
//            cout << "\n| ";
//            for (int j = 0; j < this->columns; j++) {
//                cout << setw(2) << this->board[i][j] << " |";
//            }
//            cout << "\n--------------";
//        }
//        cout << endl;
//    }
//    bool is_win() override {
//        for (int i = 0; i < this->rows; i++) {
//            if ((this->board[i][0] == this->board[i][1] && this->board[i][1] == this->board[i][2] && this->board[i][0] != "*") ||
//                (this->board[0][i] == this->board[1][i] && this->board[1][i] == this->board[2][i] && this->board[0][i] != "*")) {
//                return true;
//            }
//        }
//        if ((this->board[0][0] == this->board[1][1] && this->board[1][1] == this->board[2][2] && this->board[0][0] != "*") ||
//            (this->board[0][2] == this->board[1][1] && this->board[1][1] == this->board[2][0] && this->board[0][2] != "*")) {
//            return true;
//        }
//
//        return false;
//    }
//    string getwinSymbol() const {
//        for (int i = 0; i < this->rows; i++) {
//            if (this->board[i][0] == this->board[i][1] && this->board[i][1] == this->board[i][2] &&
//                this->board[i][0] != "*") {
//                cout<<"82"<<endl;
//                cout<<this->board[i][0]<<endl;
//                return this->board[i][0];
//            }
//            if (this->board[0][i] == this->board[1][i] && this->board[1][i] == this->board[2][i] &&
//                this->board[0][i] != "*") {
//                return this->board[0][i];
//            }
//        }
//        if (this->board[0][0] == this->board[1][1] && this->board[1][1] == this->board[2][2] && this->board[0][0] != "*"){
//            return this->board[0][0];
//        }
//        if (this->board[0][2] == this->board[1][1] && this->board[1][1] == this->board[2][0] && this->board[0][2] != "*"){
//            return this->board[0][2];
//        }
//
//    }
//
//    bool is_draw() override {
//        if (n_moves == 9) {
//            return true;
//        }
//        return false;
//    }
//    bool game_is_over() override {
//
//    p1_p2++;
//        return is_win() || is_draw()||(p1_p2%2==0);
//
//    }
//
//};
////X_O_Player<T>::X_O_Player(string name, T symbol) : Player<T>(name, symbol) {}
//
////template <typename T>
////void X_O_Player<T>::getmove(int& x, int& y) {
////    cout << "\nPlease enter your move x and y (0 to 2) separated by spaces: ";
////    cin >> x >> y;
////}
//
//class human : public Player<string> {
//public:
//    human(string n, string symbol) : Player<string>(n, symbol) {}
//    void getmove(int& x, int& y) override {
//        cout<<" 152 p1p2"<<p1_p2<<endl;
//        if(p1_p2%2==1){
//            cout<<" Enter your move (row and column): ";
//            cin >> x >> y;
//            p1_p2++;
//        }
//        else{
//            x=1234;
//            y=4321;
//        }
//
//
//    }
//};
//
//int main() {
//    ultimate_tic b1, b2, b3, b4, b5, b6, b7, b8, b9;
//    ultimate_tic big_board(1);
//    Player<string>* players[2];
//    string p1name, p2name;
//    string p1sym, p2sym;
//
//    cout << "Enter name for Player 1: ";
//    cin >> p1name;
//    p1sym = "X";
//    cout << "Enter name for Player 2: ";
//    cin >> p2name;
//    p2sym = "O";
//
//    players[0] = new human(p1name, p1sym);
//    players[1] = new human(p2name, p2sym);
//
//    // Ask the user to choose a small board to play
//    int index;
//    cout << "Enter board number to play (1-9): ";
//    cin >> index;
//
//    ultimate_tic* currentBoard = nullptr;
//    switch (index) {
//        case 1: currentBoard = &b1; break;
//        case 2: currentBoard = &b2; break;
//        case 3: currentBoard = &b3; break;
//        case 4: currentBoard = &b4; break;
//        case 5: currentBoard = &b5; break;
//        case 6: currentBoard = &b6; break;
//        case 7: currentBoard = &b7; break;
//        case 8: currentBoard = &b8; break;
//        case 9: currentBoard = &b9; break;
//        default: cout << "Invalid board number!" << endl; return 1;
//    }
//
//    // Set the players' boards
//    players[0]->setBoard(currentBoard);
//    players[1]->setBoard(currentBoard);
//
//    // Start the game with the GameManager
//    GameManager<string> manager(currentBoard, players);
//    manager.run();
//
//    // After the game is over, check the small boards for wins and update the big board
//    if (b1.is_win()) {
//        big_board.update_board(0, 0, b1.getwinSymbol());
//    }
//    if (b2.is_win()) {
//        big_board.update_board(0, 1, b2.getwinSymbol());
//    }
//    if (b3.is_win()) {
//        big_board.update_board(0, 2, b3.getwinSymbol());
//    }
//    if (b4.is_win()) {
//        big_board.update_board(1, 0, b4.getwinSymbol());
//    }
//    if (b5.is_win()) {
//        big_board.update_board(1, 1, b5.getwinSymbol());
//    }
//    if (b6.is_win()) {
//        big_board.update_board(1, 2, b6.getwinSymbol());
//    }
//    if (b7.is_win()) {
//        big_board.update_board(2, 0, b7.getwinSymbol());
//    }
//    if (b8.is_win()) {
//        big_board.update_board(2, 1, b8.getwinSymbol());
//    }
//    if (b9.is_win()) {
//        big_board.update_board(2, 2, b9.getwinSymbol());
//    }
//
//    // Display the final big board and the result of the small boards
//    big_board.display_board();
//    return 0;
//}
//
//


//#include <iostream>
//#include <iomanip>
//#include "BoardGame_Classes.h"
//#include <cctype>
//using namespace std;
//
//int p1_p2 = 1;
//int turn = 1;
//
//struct fkp1 {
//    string sym;
//    fkp1(string s) : sym(s) {}
//};
//fkp1 p1("X");
//fkp1 p2("O");
//
//class ultimate_tic : public Board<string> {
//public:
//    ultimate_tic() {
//        this->rows = this->columns = 3;
//        this->board = new string *[this->rows];
//        for (int i = 0; i < this->rows; i++) {
//            this->board[i] = new string[this->columns];
//            for (int j = 0; j < this->columns; j++) {
//                this->board[i][j] = "*";
//            }
//        }
//        this->n_moves = 0;
//    }
//
//    ultimate_tic(int n) {
//        int counter = 1;
//        this->rows = this->columns = 3;
//        this->board = new string *[this->rows];
//        for (int i = 0; i < this->rows; i++) {
//            this->board[i] = new string[this->columns];
//            for (int j = 0; j < this->columns; j++) {
//                this->board[i][j] = "b" + std::to_string(counter);
//                counter++;
//            }
//        }
//        this->n_moves = 0;
//    }
//
//    ~ultimate_tic() {
//        for (int i = 0; i < 3; ++i) {
//            delete[] board[i];
//        }
//        delete[] board;
//    }
//
//    bool update_board(int x, int y, string symbol) override {
//        if (x >= 0 && x < 3 && y >= 0 && y < 3 && (board[x][y] == "*" ||
//                                                   board[x][y].substr(0, 1) == "b")) {
//            board[x][y] = symbol;
//            n_moves++;
//            return true;
//        }
//        return false;
//    }
//
//    void display_board() override {
//        for (int i = 0; i < this->rows; i++) {
//            cout << "\n| ";
//            for (int j = 0; j < this->columns; j++) {
//                cout << setw(2) << this->board[i][j] << " |";
//            }
//            cout << "\n--------------";
//        }
//        cout << endl;
//    }
//
//    bool is_win() override {
//        for (int i = 0; i < this->rows; i++) {
//            if ((this->board[i][0] == this->board[i][1] && this->board[i][1] == this->board[i][2] && this->board[i][0] != "*") ||
//                (this->board[0][i] == this->board[1][i] && this->board[1][i] == this->board[2][i] && this->board[0][i] != "*")) {
//                return true;
//            }
//        }
//        if ((this->board[0][0] == this->board[1][1] && this->board[1][1] == this->board[2][2] && this->board[0][0] != "*") ||
//            (this->board[0][2] == this->board[1][1] && this->board[1][1] == this->board[2][0] && this->board[0][2] != "*")) {
//            return true;
//        }
//
//        return false;
//    }
//
//    string getwinSymbol() const {
//        for (int i = 0; i < this->rows; i++) {
//            if (this->board[i][0] == this->board[i][1] && this->board[i][1] == this->board[i][2] &&
//                this->board[i][0] != "*") {
//                return this->board[i][0];
//            }
//            if (this->board[0][i] == this->board[1][i] && this->board[1][i] == this->board[2][i] &&
//                this->board[0][i] != "*") {
//                return this->board[0][i];
//            }
//        }
//        if (this->board[0][0] == this->board[1][1] && this->board[1][1] == this->board[2][2] && this->board[0][0] != "*") {
//            return this->board[0][0];
//        }
//        if (this->board[0][2] == this->board[1][1] && this->board[1][1] == this->board[2][0] && this->board[0][2] != "*") {
//            return this->board[0][2];
//        }
//        return "";
//    }
//
//    bool is_draw() override {
//        return n_moves == 9;
//    }
//
//    bool game_is_over() override {
//        return is_win() || is_draw();
//    }
//};
//
//class human : public Player<string> {
//public:
//    human(string n, string symbol) : Player<string>(n, symbol) {}
//
//    void getmove(int &x, int &y) override {
//        cout << "Enter your move (row and column): ";
//        cin >> x >> y;
//    }
//};
//
//int main() {
//    ultimate_tic boards[9] = {ultimate_tic(), ultimate_tic(), ultimate_tic(), ultimate_tic(), ultimate_tic(), ultimate_tic(), ultimate_tic(), ultimate_tic(), ultimate_tic()};
//    ultimate_tic big_board(1);
//    Player<string> *players[2];
//
//    string p1name, p2name;
//    cout << "Enter name for Player 1: ";
//    cin >> p1name;
//    cout << "Enter name for Player 2: ";
//    cin >> p2name;
//
//    players[0] = new human(p1name, "X");
//    players[1] = new human(p2name, "O");
//
//    int currentPlayer = 0;
//    while (true) {
//        big_board.display_board();
//
//        // Choose a board
//        int index;
//        do {
//            cout << players[currentPlayer]->getname() << ", choose a board (1-9): ";
//            cin >> index;
//        } while (index < 1 || index > 9);
//
//        ultimate_tic &currentBoard = boards[index - 1];
//
//        // Play a move
//        currentBoard.display_board();
//        int x, y;
//        players[currentPlayer]->getmove(x, y);
//        if (currentBoard.update_board(x, y, players[currentPlayer]->getsymbol())) {
//            if (currentBoard.is_win()) {
//                big_board.update_board((index - 1) / 3, (index - 1) % 3, players[currentPlayer]->getsymbol());
//            }
//        } else {
//            cout << "Invalid move. Try again.\n";
//            continue;
//        }
//
//        // Check for game over
//        if (big_board.is_win()) {
//            cout << players[currentPlayer]->getname() << " wins the game!\n";
//            break;
//        } else if (big_board.is_draw()) {
//            cout << "The game is a draw!\n";
//            break;
//        }
//
//        // Switch player
//        currentPlayer = 1 - currentPlayer;
//    }
//
//    // Clean up
//    delete players[0];
//    delete players[1];
//
//    return 0;
//}

//#include <iostream>
//#include <iomanip>
//#include "BoardGame_Classes.h"
//#include <cctype>
//using namespace std;
//
//int p1_p2 = 1;
//int turn = 1;
//
//struct fkp1 {
//    string sym;
//    fkp1(string s) : sym(s) {}
//};
//fkp1 p1("X");
//fkp1 p2("O");
//
//class ultimate_tic : public Board<string> {
//public:
//    ultimate_tic() {
//        this->rows = this->columns = 3;
//        this->board = new string *[this->rows];
//        for (int i = 0; i < this->rows; i++) {
//            this->board[i] = new string[this->columns];
//            for (int j = 0; j < this->columns; j++) {
//                this->board[i][j] = "*";
//            }
//        }
//        this->n_moves = 0;
//    }
//
//    ultimate_tic(int n) {
//        int counter = 1;
//        this->rows = this->columns = 3;
//        this->board = new string *[this->rows];
//        for (int i = 0; i < this->rows; i++) {
//            this->board[i] = new string[this->columns];
//            for (int j = 0; j < this->columns; j++) {
//                this->board[i][j] = "b" + std::to_string(counter);
//                counter++;
//            }
//        }
//        this->n_moves = 0;
//    }
//
//    ~ultimate_tic() {
//        for (int i = 0; i < 3; ++i) {
//            delete[] board[i];
//        }
//        delete[] board;
//    }
//
//    bool update_board(int x, int y, string symbol) override {
//        if (x >= 0 && x < 3 && y >= 0 && y < 3 && (board[x][y] == "*" ||
//                                                   board[x][y].substr(0, 1) == "b")) {
//            board[x][y] = symbol;
//            n_moves++;
//            return true;
//        }
//        return false;
//    }
//
//    void display_board() override {
//        for (int i = 0; i < this->rows; i++) {
//            cout << "\n| ";
//            for (int j = 0; j < this->columns; j++) {
//                cout << setw(2) << this->board[i][j] << " |";
//            }
//            cout << "\n--------------";
//        }
//        cout << endl;
//    }
//
//    bool is_win() override {
//        for (int i = 0; i < this->rows; i++) {
//            if ((this->board[i][0] == this->board[i][1] && this->board[i][1] == this->board[i][2] && this->board[i][0] != "*") ||
//                (this->board[0][i] == this->board[1][i] && this->board[1][i] == this->board[2][i] && this->board[0][i] != "*")) {
//                return true;
//            }
//        }
//        if ((this->board[0][0] == this->board[1][1] && this->board[1][1] == this->board[2][2] && this->board[0][0] != "*") ||
//            (this->board[0][2] == this->board[1][1] && this->board[1][1] == this->board[2][0] && this->board[0][2] != "*")) {
//            return true;
//        }
//
//        return false;
//    }
//
//    string getwinSymbol() const {
//        for (int i = 0; i < this->rows; i++) {
//            if (this->board[i][0] == this->board[i][1] && this->board[i][1] == this->board[i][2] &&
//                this->board[i][0] != "*") {
//                return this->board[i][0];
//            }
//            if (this->board[0][i] == this->board[1][i] && this->board[1][i] == this->board[2][i] &&
//                this->board[0][i] != "*") {
//                return this->board[0][i];
//            }
//        }
//        if (this->board[0][0] == this->board[1][1] && this->board[1][1] == this->board[2][2] && this->board[0][0] != "*") {
//            return this->board[0][0];
//        }
//        if (this->board[0][2] == this->board[1][1] && this->board[1][1] == this->board[2][0] && this->board[0][2] != "*") {
//            return this->board[0][2];
//        }
//        return "";
//    }
//
//    bool is_draw() override {
//        return n_moves == 9;
//    }
//
//    bool game_is_over() override {
//        return is_win() || is_draw();
//    }
//};
//
//class human : public Player<string> {
//public:
//    human(string n, string symbol) : Player<string>(n, symbol) {}
//
//    void getmove(int &x, int &y) override {
//        cout << "Enter your move (row and column): ";
//        cin >> x >> y;
//    }
//};
//
//int main() {
//    ultimate_tic boards[9] = {ultimate_tic(), ultimate_tic(), ultimate_tic(), ultimate_tic(), ultimate_tic(), ultimate_tic(), ultimate_tic(), ultimate_tic(), ultimate_tic()};
//    ultimate_tic big_board(1);
//    Player<string> *players[2];
//
//    string p1name, p2name;
//    cout << "Enter name for Player 1: ";
//    cin >> p1name;
//    cout << "Enter name for Player 2: ";
//    cin >> p2name;
//
//    players[0] = new human(p1name, "X");
//    players[1] = new human(p2name, "O");
//
//    int currentPlayer = 0;
//    while (true) {
//        cout << "\nBig Board:";
//        big_board.display_board();
//
//        // Display all boards
//        for (int i = 0; i < 9; ++i) {
//            cout << "\nBoard " << (i + 1) << ":";
//            boards[i].display_board();
//        }
//
//        // Choose a board
//        int index;
//        do {
//            cout << players[currentPlayer]->getname() << ", choose a board (1-9): ";
//            cin >> index;
//        } while (index < 1 || index > 9);
//
//        ultimate_tic &currentBoard = boards[index - 1];
//
//        // Play a move
//        currentBoard.display_board();
//        int x, y;
//        players[currentPlayer]->getmove(x, y);
//        if (currentBoard.update_board(x, y, players[currentPlayer]->getsymbol())) {
//            if (currentBoard.is_win()) {
//                big_board.update_board((index - 1) / 3, (index - 1) % 3, players[currentPlayer]->getsymbol());
//            }
//        } else {
//            cout << "Invalid move. Try again.\n";
//            continue;
//        }
//
//        // Check for game over
//        if (big_board.is_win()) {
//            cout << players[currentPlayer]->getname() << " wins the game!\n";
//            break;
//        } else if (big_board.is_draw()) {
//            cout << "The game is a draw!\n";
//            break;
//        }
//
//        // Switch player
//        currentPlayer = 1 - currentPlayer;
//    }
//
//    // Clean up
//    delete players[0];
//    delete players[1];
//
//    return 0;
//}
#include <iostream>
#include <iomanip>
#include "BoardGame_Classes.h"
#include <cctype>
using namespace std;

int p1_p2 = 1;
int turn = 1;

struct fkp1 {
    string sym;
    fkp1(string s) : sym(s) {}
};
fkp1 p1("X");
fkp1 p2("O");

class ultimate_tic : public Board<string> {
public:
    ultimate_tic() {
        this->rows = this->columns = 3;
        this->board = new string *[this->rows];
        for (int i = 0; i < this->rows; i++) {
            this->board[i] = new string[this->columns];
            for (int j = 0; j < this->columns; j++) {
                this->board[i][j] = "*";
            }
        }
        this->n_moves = 0;
    }

    ultimate_tic(int n) {
        int counter = 1;
        this->rows = this->columns = 3;
        this->board = new string *[this->rows];
        for (int i = 0; i < this->rows; i++) {
            this->board[i] = new string[this->columns];
            for (int j = 0; j < this->columns; j++) {
                this->board[i][j] = "b" + std::to_string(counter);
                counter++;
            }
        }
        this->n_moves = 0;
    }

    ~ultimate_tic() {
        for (int i = 0; i < 3; ++i) {
            delete[] board[i];
        }
        delete[] board;
    }

    bool update_board(int x, int y, string symbol) override {
        if (x >= 0 && x < 3 && y >= 0 && y < 3 && (board[x][y] == "*" ||
                                                   board[x][y].substr(0, 1) == "b")) {
            board[x][y] = symbol;
            n_moves++;
            return true;
        }
        return false;
    }

    void display_board() override {
        for (int i = 0; i < this->rows; i++) {
            cout << "| ";
            for (int j = 0; j < this->columns; j++) {
                cout << setw(2) << this->board[i][j] << " |";
            }
            cout << "\n";
        }
        cout << endl;
    }

    bool is_win() override {
        for (int i = 0; i < this->rows; i++) {
            if ((this->board[i][0] == this->board[i][1] && this->board[i][1] == this->board[i][2] && this->board[i][0] != "*") ||
                (this->board[0][i] == this->board[1][i] && this->board[1][i] == this->board[2][i] && this->board[0][i] != "*")) {
                return true;
            }
        }
        if ((this->board[0][0] == this->board[1][1] && this->board[1][1] == this->board[2][2] && this->board[0][0] != "*") ||
            (this->board[0][2] == this->board[1][1] && this->board[1][1] == this->board[2][0] && this->board[0][2] != "*")) {
            return true;
        }

        return false;
    }

    string getwinSymbol() const {
        for (int i = 0; i < this->rows; i++) {
            if (this->board[i][0] == this->board[i][1] && this->board[i][1] == this->board[i][2] &&
                this->board[i][0] != "*") {
                return this->board[i][0];
            }
            if (this->board[0][i] == this->board[1][i] && this->board[1][i] == this->board[2][i] &&
                this->board[0][i] != "*") {
                return this->board[0][i];
            }
        }
        if (this->board[0][0] == this->board[1][1] && this->board[1][1] == this->board[2][2] && this->board[0][0] != "*") {
            return this->board[0][0];
        }
        if (this->board[0][2] == this->board[1][1] && this->board[1][1] == this->board[2][0] && this->board[0][2] != "*") {
            return this->board[0][2];
        }
        return "";
    }

    bool is_draw() override {
        return n_moves == 9;
    }

    bool game_is_over() override {
        return is_win() || is_draw();
    }
};

class human : public Player<string> {
public:
    human(string n, string symbol) : Player<string>(n, symbol) {}

    void getmove(int &x, int &y) override {
        cout << "Enter your move (row and column): ";
        cin >> x >> y;
    }
};

void display_ultimate_board(ultimate_tic boards[9]) {
    for (int i = 0; i < 3; ++i) {
        for (int row = 0; row < 3; ++row) {
            for (int j = 0; j < 3; ++j) {
                for (int col = 0; col < 3; ++col) {
                    cout << setw(2) << boards[i * 3 + j].board[row][col] << " ";
                }
                cout << " | ";
            }
            cout << endl;
        }
        cout << "---------------------------" << endl;
    }
}

int main() {
    ultimate_tic boards[9] = {ultimate_tic(), ultimate_tic(), ultimate_tic(), ultimate_tic(), ultimate_tic(), ultimate_tic(), ultimate_tic(), ultimate_tic(), ultimate_tic()};
    ultimate_tic big_board(1);
    Player<string> *players[2];

    string p1name, p2name;
    cout << "Enter name for Player 1: ";
    cin >> p1name;
    cout << "Enter name for Player 2: ";
    cin >> p2name;

    players[0] = new human(p1name, "X");
    players[1] = new human(p2name, "O");

    int currentPlayer = 0;
    while (true) {
        cout << "\nBig Board:";
        big_board.display_board();

        // Display the entire ultimate board
        cout << "\nUltimate Tic-Tac-Toe Board:" << endl;
        display_ultimate_board(boards);

        // Choose a board
        int index;
        do {
            cout << players[currentPlayer]->getname() << ", choose a board (1-9): ";
            cin >> index;
        } while (index < 1 || index > 9);

        ultimate_tic &currentBoard = boards[index - 1];

        // Play a move
        currentBoard.display_board();
        int x, y;
        players[currentPlayer]->getmove(x, y);
        if (currentBoard.update_board(x, y, players[currentPlayer]->getsymbol())) {
            if (currentBoard.is_win()) {
                big_board.update_board((index - 1) / 3, (index - 1) % 3, players[currentPlayer]->getsymbol());
            }
        } else {
            cout << "Invalid move. Try again.\n";
            continue;
        }

        // Check for game over
        if (big_board.is_win()) {
            cout << players[currentPlayer]->getname() << " wins the game!\n";
            break;
        } else if (big_board.is_draw()) {
            cout << "The game is a draw!\n";
            break;
        }

        // Switch player
        currentPlayer = 1 - currentPlayer;
    }

//    // Clean up
//    delete players[0];
//    delete players[1];

    return 0;
}

