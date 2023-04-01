#include <iostream>

using namespace std;

int main()
{
    int numbers[3][8]={ {2,3,2,2,4,5,5,4}, {2,5,2,5,4,5,5,4}, {2,4,4,2,4,3,5,4} };
    /*//for all students;
    int sum =0,;
    double avg;
    for (int i=0;i<3;i++){
        for(int j=0;j<8;j++){
            sum+=numbers[i][j];
            cout<<numbers[i][j]<<" ";
        }
        cout<<endl;
    }
    avg = sum/(3.0*8.0);
    cout<<"Avarage :"<<avg<<endl;*/
    //Each students
    double sum =0;
    double avg[3];
    for (int i=0;i<3;i++){
        for(int j=0;j<8;j++){
            sum+=numbers[i][j];
            cout<<numbers[i][j]<<" ";
        }
    avg[i] = sum/8.0;
     sum=0;
cout<<endl;
}
cout<<"Avarage :"<<endl;
for (int i=0;i<3;i++){
cout<<i+1<<". "<<avg[i]<<endl;
}
return 0;
}
