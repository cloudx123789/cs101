#include <bits/stdc++.h>
using namespace std;
class TicTacToe
{
    private:
    char number[9];
    int nowplayer;
    
    public:
    TicTacToe(): nowplayer(1)
    {
        for(int i=0; i<9; i++)
        {
            number[i]='1'+i;
        }
    }
    
    void beginning()
    {
        cout<<"-- Tic Tac Toe -- CSIE@CGU"<<endl;
        cout<<"Player 1 (X) - Player 2 (O)"<<endl;
    }
    
    void printboard()
    {
        for(int j=0; j<9; j+=3)
        {
            cout<<" "<<number[j]<<" "<<"|"<<" "<<number[j+1]<<" "<<"|"<<" "<<number[j+2]<<" "<<endl;
            if(j<4)
            {
                cout<<"---+---+---"<< endl;
            }
        }
    }
    
    void playernotice()
    {
        if(nowplayer==1)
        {
            cout<<"==> Player 1 (X), enter a number:";
        }
        else
        {
            cout<<"==> Player 2 (O), enter a number:";
        }
    }
    
    bool legal(int choice)
    {
        return choice>=1 && choice<=9 && number[choice-1]!='O' && number[choice-1]!='X';
    }
    
    bool winlose()
    {
        char symbol;
        if(nowplayer==1)
        {
            symbol='X';            
        }
        else
        {
            symbol='O';
        }
        int win[8][3]=
        {
            {0,1,2},{3,4,5},{6,7,8},
            {0,3,6},{1,4,7},{2,5,8},
            {0,4,8},{2,4,6}
        };
        
        for(auto& line: win)
        {
            if(number[line[0]]==symbol&&number[line[1]]==symbol&&number[line[2]]==symbol)
            {
                return true;
            }
        }
        return false;
    }
    
    bool tie()
    {
        for(char a: number)
        {
            if(a!='O' && a!='X')
            {
                return false;
            }
        }
        return true;
    }
    
    void switchplayer()
    {
        nowplayer=3-nowplayer;
    }
    
    void moving(int choice)
    {
        number[choice-1]= (nowplayer==1)? 'X': 'O';
    }
    
    void playing()
    {
        int draw;
        beginning();
        while(true)
        {
            printboard();
            playernotice();
            cin>>draw;
            while (legal(draw)!=1)
            {
                cout<<"==> Invalid value, please enter again"<<endl;
                playernotice();
                cin>>draw;
            }
            
            moving(draw);
            if(winlose()==1)
            {
                printboard();
                cout<<"==> Player "<<nowplayer<<" wins!"<<endl;
                break;
            }
            else if(tie()==1)
            {
                printboard();
                cout<<"==> Game draw"<<endl;
                break;
            }
            switchplayer();
        }
    }
};

int main()
{
    TicTacToe game;
    game.playing();
}




TicTacToe
Description

以 Class 實作一個井字棋遊戲：

設計棋盤為 3*3 大小
設計兩個玩家：Player 1與Player 2
Player 1 固定都是「X」棋子，做為先手
Player 2固定都是「O」棋子，做為後手
玩家輪流輸入棋盤上的數字代表欲落子的位置，每一次落子成功後，要輸出棋盤當前的狀態，直到遊戲結束
已落子的位置不能被覆蓋，若玩家落子的位置已經有棋子，則要跳出警告，指示玩家重新選一個位置
設計三個情境：Player 1 勝利、Player 2 勝利、平手

Input

使用scanf() 函式或std::cin 物件接收輸入。


Output

使用printf() 函式或std::cout 物件輸出
