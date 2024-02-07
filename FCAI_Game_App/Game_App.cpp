// Class definition for XO_App class

#include <iostream>
//#include"../include/Board_Games.hpp"
#include "Board_Games.hpp"
using namespace std;
void Game_interface(){
    int x;
    cout << "Welcome to FCAI Games. :)\n";
    cout << "Press 1 if you want pyramid XO \n"
            "Press 2 if you want connect 4\n"
            "Press 3 if you want 5x5 XO\n"
            "Press 4 if you want normal XO\n";
    cin>>x;
    switch (x) {
        case 1: {
            char choice;
            Player* players[2];
            players[0] = new Player (1, 'x');

            cout << "if you want to play with AI press 1\n";
            cin >> choice;
            Board* brd = new Pyramid_X_O();                    //newwwwwwwwwwwwwwww
            if (choice != '1')
                players[1] = new Player(2, 'o');
            else
                //Player pointer points to child

            players[1] = new RandomPlayer('o', 5,brd);                 //newwwwwwwwwwwwwwww
            GameManager x_o_game(brd, players);
            x_o_game.run();
            break;
        }
        case 2: {
            connect4 game;
            break;
        }
        case 3:{
            char choice;
            Player* players[2];
            players[0] = new Player (1, 'x');

            cout << "if you want to play with AI press 1\n";
            cin >> choice;
            Board* brd = new X_O_5X5;  //newwwwwwwwwwwwwwwww
            if (choice != '1')
                players[1] = new Player(2, 'o');
            else
                //Player pointer points to child
                players[1] = new RandomPlayer('o', 5,brd);      //newwwwwwwwwwwwwwww

            GameManager x_o_game(brd, players);  
            x_o_game.run();
            break;
        }
        case 4:{
            char choice;
            Player* players[2];
            players[0] = new Player (1, 'x');

            cout << "if you want to play with AI press 1\n";
            cin >> choice;
            Board* brd = new X_O_Board;                //newwwwwwwwwwwwwwww
            if (choice != '1')
                players[1] = new Player(2, 'o');
            else
                //Player pointer points to child
                players[1] = new RandomPlayer('o', 3,brd);                         //newwwwwwwwwwwwwwww

            GameManager x_o_game(brd, players);
            x_o_game.run();
            break;
        }
    }
}
int main() {
    int n=1;
    while(n==1){
        Game_interface();
        cout<<"If you want to play again press 1\n";
        cin>>n;
    }
    system("pause");
    return 0;
}
