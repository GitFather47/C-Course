#include <iostream>

using namespace std;


int main(){
    /*char arr[10];
    cout<<"Enter a word: ";
    cin>>arr;
    for(int i=0; arr[i]!='\0';i++)
    {
        if(arr[i]=='a' || arr[i]=='e' || arr[i]=='i' || arr[i]=='o' || arr[i]=='u' || arr[i]=='A' || arr[i]=='E' || arr[i]=='I' || arr[i]=='O' || arr[i]=='U')
        {
            cout<<arr[i]<<",";
        }
    }*/
    char vowel[10];
    cout<<"Enter a  word: ";
    cin>>vowel;
    for (int i=0;vowel[i]!='\0';i++){
        if (vowel[i]=='A' || vowel[i]=='a' || vowel[i]=='E'|| vowel[i]=='e'||vowel[i]=='I'||vowel[i]=='i'||vowel[i]=='O'||vowel[i]=='o'){
            cout<<vowel[i]<<",";

        }
    }//1.it will take the word as input,divide the letters as characters assigns them to different index and the will check vowels until a null int/character comes.
    return 0;
}
