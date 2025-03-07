#include<iostream>

using namespace std;

void showBoard(char game[3][3]){

    cout<<"          |            |       "<<endl;
    cout<<"     "<<game[0][0]<<"    |     "<< game[0][1]<<"      |      " <<game[0][2]<<endl;
    cout<<"          |            |       "<<endl;
    cout<<"-------------------------------------"<<endl;
    cout<<"          |            |       "<<endl;
    cout<<"     "<<game[1][0]<<"    |     "<< game[1][1]<<"      |      " <<game[1][2]<<endl;
    cout<<"          |            |       "<<endl;
    cout<<"-------------------------------------"<<endl;
    cout<<"          |            |       "<<endl;
    cout<<"     "<<game[2][0]<<"    |     "<< game[2][1]<<"      |      " <<game[2][2]<<endl;
    cout<<"          |            |       "<<endl;

}

bool checkWin(char game[3][3],char player){
    for(int i=0;i<3;i++){
        if(game[0][i]==player && game[1][i]== player && game[2][i]==player){
            return true;
        }
        if(game[i][0]==player && game[i][1]== player && game[i][2]==player){
            return true;
        }
    }
        if(game[0][0]==player && game[1][1]== player && game[2][2]==player){
            return true;
        }
        if(game[0][2]==player && game[1][1]==player && game[2][0]==player){
            return true;
        }
                return false;
}


int main(){

    string player1,player2,playerNme;
    int turn=0,row,col;
    char game[3][3]={' ',' ',' ',' ',' ',' ',' ',' ',' '},player='X';
    cout<<"It's a Tic-Tac-Toe Game..."<<endl;
    cout<<"Enter player1 name: ";
    cin>>player1;
    cout<<"Enter player2 name: ";
    cin>>player2;

    showBoard(game);
    playerNme=player1;
    cout<<playerNme<<" ,It's your turn."<<endl;
    while(turn<9){
        
        cout<<"Enter row and column where you want to put your turn: ";
        cin>>row>>col;
        if(game[row][col]!= ' '|| row>2 || row<0 || col<0 || col>2){
            cout<<"Invalid move.."<<endl;
            continue;
        }
        else{
            game[row][col]=player;
            showBoard(game);
            if (checkWin(game,player)){
                cout<<playerNme<<" wins!!"<<endl;
                 return 0;
            }
            else{
            if(player=='X'){
                player='O';
                playerNme=player2;
                cout<<player2<<" ,It's your turn."<<endl;
            }
            else{
                player='X';
                playerNme=player1;
                cout<<player1<<" ,It's your turn."<<endl;
            }
        }   
            turn++;
        }
    }
    if(turn==9)
    {
        cout<<"Draw!!";
    }

    return 0;

}
