#include <iostream>

using namespace std;

int main()
{
    int num[10],even[5],odd[5],j=0,k=0;
    cout<<"Enter integers(1-10): ";
    for(int i=0;i<10;i++){
        cin>>num[i];
    }
  for (int i=0;i<10;i++){
    if(num[i]%2==0){
        even[j]=num[i];
        j++;
    }
    else{
        odd[k]=num[i];
        k++;
    }
}
    cout<<"Even numbers are: ";
    for (j=0;j<5;j++){
        cout<<even[j]<<",";
    }
    cout<<"Odd numbers are: ";
    for (k=0;k<5;k++){
        cout<<odd[k]<<",";
    }
}
/*
    int arr[10];
    cout << "Enter 10 numbers from 1 to 10 : ";
    for(int i=0; i<10; i++)
    {
        cin >> arr[i];
    }
    cout << "Even numbers are : ";
    for(int i=0; i<10; i++)
    {
        if(arr[i]%2 == 0)
        {
            cout << arr[i] << " ";
        }
    }
    cout << "\nOdd numbers are : ";
    for(int i=0; i<10; i++)
    {
        if(arr[i]%2 != 0)
        {
            cout << arr[i] << " ";
        }
    }
    return 0;
}*/

/*
{
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int even[5];
    int odd[5];
    int k = 0, l = 0;

    for (int i = 0; i < 10; i++) {
        if (a[i] % 2 == 0) {
            even[k] = a[i];
            k++;
        }
        else {
            odd[l] = a[i];
            l++;
        }
    }

    cout << "Even numbers: ";
    for (int i = 0; i <k; i++)
        cout << even[i] << " ";

    cout << "\nOdd numbers: ";
    for (int i = 0; i < l; i++)
        cout << odd[i] << " ";

}
}*/
