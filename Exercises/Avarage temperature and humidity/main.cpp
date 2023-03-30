#include <iostream>

using namespace std;

int main()
{
    double temp[4],hum[4],avgT,avgH,totalT,totalH;
    cout<<"Temperature: "<<endl;
    for(int i=1;i<=4;i++){
        cin>>temp[i];

    }
    cout<<"Humidity: "<<endl;
    for(int i=1;i<=4;i++){
        cin>>hum[i];
    }

    for(int i=1;i<=4;i++){
        totalT+=temp[i];
        totalH+=hum[i];
    }
    avgT=totalT/4;
    avgH=totalH/4;
    cout<<"Avarage Temperature: "<<avgT<<endl;
    cout<<"Avarage Humidity: "<<avgH<<endl;
    return 0;
}
