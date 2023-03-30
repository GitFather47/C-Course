#include <iostream>

using namespace std;

int main()
{
    double height,weight,bmi;
    cout<<"Enter your weight: ";
    cin>>weight;
     cout<<"Enter your height: ";
    cin>>height;
    bmi=weight/(height*height);//height in meter and weight in kg
    cout<<"Your BMI is: "<<bmi<<endl;
    if (bmi<18.5){
        cout<<"You're underweight.";
    }

    else if (bmi>=18.5 && bmi<=24.9)
    {
        cout<<"You have normal weight.";
    }

    else if (bmi>=25 && bmi<=29.9)
    {
        cout<<"You're overweight";
    }
    else if (bmi>=30 && bmi<=34.9)
    {
        cout<<"You're obese.";
    }
    else if(bmi>=35 && bmi<=39.9)
    {
        cout<<"You're severely obese";
    }
    else{
        cout<<"You're morbidly obese";

    }
    return 0;
}
