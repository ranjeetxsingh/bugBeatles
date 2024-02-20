// NSEW direction practice problem

#include<iostream>
#include<string.h>
using namespace std;

int main(){
    char sentence[100];
    cin.getline(sentence, 100);
    int x = 0; // to calculate movement in N and S direction
    int y = 0; // to calculate movement in E and W direction
    int length = strlen(sentence);

    for (int i = 0; i < length; i++){
        if(sentence[i] == 'N')
            x++;
        else if(sentence[i] == 'S')
            x--;
        else if (sentence[i] == 'E')
            y++;
        else
            y--;
    }

    char ans[100];
    int i = 0;
    while(x!=0){
        if(x>0){
            ans[i] = 'N';
            i++;
            x--;
        }else{
            ans[i] = 'S';
            i++;
            x++;
        }
    }
    while(y!=0){
        if(y>0){
            ans[i] = 'E';
            i++;
            y--;
        }else{
            ans[i] = 'W';
            i++;
            y++;
        }
    }

    ans[i] = '\0';

    cout << ans << endl;

    return 0;
}