#include <iostream>

using namespace std;

int main()
{
    /*
    char num;
    cout<<"Give letter: ";
    cin>>num;
    if (l=='A'|| l='a'||l=='E'|| l='e'|| l='I'|| l='i'|| l='O'|| l='o'|| l='U'|| l='u' ){
    switch(l){
    case 'A':
    cout<<l<<" is a vowel"<<endl;
    break;
    case 'a':
    cout<<l<<" is a vowel"<<endl;
    break;
    case 'E':
    cout<<l<<" is a vowel"<<endl;
    break;
    case 'e':
    cout<<l<<" is a vowel"<<endl;
    break;
    case 'I':
    cout<<l<<" is a vowel"<<endl;
    break;
    case 'i':
    cout<<l<<" is a vowel"<<endl;
    break;
    case 'O':
    cout<<l<<" is a vowel"<<endl;
    break;
    case 'o':
    cout<<l<<" is a vowel"<<endl;
    break;
    case 'U':
    cout<<l<<" is a vowel"<<endl;
    break;
    case 'u':
    cout<<l<<" is a vowel"<<endl;
    break;
    default:
    cout<<"is a consonent"<<endl;
    break;
    }
else{
    cout<<l<<"Not a character"<<endl;
    }
    */
   char letter;
   cout<<"Enter a character: ";
   cin>>letter;

 switch (letter) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            cout << letter << " is a vowel." << endl;
            break;
        default:
            if ((letter >= 'a' && letter <= 'z') || (letter >= 'A' && letter <= 'Z')) {
                cout << letter << " is a consonant." << endl;
            }
            else {
                cout << "Not a character." << endl;
            }
            break;
    }

    return 0;
}
