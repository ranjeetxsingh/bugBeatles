#include<iostream>
#include<string.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    cin.get();

    char sentence[1000];
    char largest[1000];
    int maxLength = -1;

    while(n--){
        cin.getline(sentence, 1000);
        int len = strlen(sentence);
        if(len>maxLength){
            strcpy(largest, sentence);
            maxLength = len;
        }
    }

    cout << "maximum length sentence is: " << largest << "\nits length is: " << maxLength << endl;

    return 0;
}