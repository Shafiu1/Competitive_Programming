#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<vector<char>> board;
    unordered_set<char> row[9],col[9],box[9];
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            if(board[i][j]=='.') continue;
            char num=board[i][j];
            int box_index=(i/3)*3+j/3;
            if(row[i].count(num) || col[j].count(num) ||box[box_index].count(num)){
                return false;
            } 
            row[i].insert(num);
            col[j].insert(num);
            box[box_index].insert(num);
        }
    }
    return true;
}