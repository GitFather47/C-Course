#include <iostream>
#include<string>
using namespace std;

int main()
{
    /*string a[50][50];
    string s;
    cout<<"Enter a  word: ";
    getline(cin,s);
    for (int i=0;a[i]!='\0';i++){
        for(int j=0;j<s.length();j+=2){
    a[i].append(s.charAt(j));
}
}*/
string s;
cout<<"Enter a string : ";
getline(cin, s);
int rows=7;
int cols=s.length();

char arr[rows][cols];
for(int i=0;i<rows;i++){
    for(int j=0;j<cols;j++){
        arr[i][j]=' ';
    }
}
int row=0,col=0;
bool down =true;
for(int i=0;i<s.length();i++){
    arr[row][col]=s[i];
    if(down){
        row++;
    }
    else{
        row--;
    }
    if(row==rows-1){
        down=false;
    }
    else if(row==0){
        down=true;
    }
    col++;
}
for (int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
                cout<<arr[i][j];
        }
}
    return 0;
}
