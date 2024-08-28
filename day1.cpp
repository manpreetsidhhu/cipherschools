#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int question1(string a, string b){
    cout<<"Answer of 1st question of Day 1: ";
    cout<<a<<b<<endl;
    return 0;
}
int question2(int arr[],int n){
    int sum = 0;
    for(int i=0;i<n;i++){
        sum += arr[i];
    }
    double average = static_cast<double>(sum) / n;
    cout << fixed << setprecision(1) << "The average grade is: " << average << endl;
    return 0;
}
int question3(int n){
    cout<<"The square of "<<n<<" is: "<<n*n;
    return 0;
}

int main(){
    int n;
    cout<<"Enter Question number of Day 1: ";
    cin>>n;
    if(n==1){
        string a;
        string b;
        cout<<"Enter string 1: ";
        cin>> a;
        cout<<"Enter String 2: ";
        cin >> b;
        question1(a,b);
    }
    if(n==2){
        int arr[5];
        for(int i=0;i<5;i++){
            cout<<"Enter grade "<<i+1<<": ";
            cin>>arr[i];
        }
        question2(arr,5);
    }
    if(n==3){
        int a;
        cout<<"Enter a number: ";
        cin>>a;
        question3(a);
    }
}