#include <iostream>
using namespace std;

int main(){
    int number_test;
    cin>>number_test;
    string data="";
    for(int i=0;i<number_test;i++){
        cin>>data;
        string value1="";
        string value2="";
        for(int j=0;j<data.length();j++){
            if(data.at(j)=='4'){
                value1+='3';
                value2+='1';
            }
            else {
                value1+=data.at(j);
                value2+='0';
            }
        }
        int val1=stoi(value1);
        int val2=stoi(value2);
        cout<<"Case #"<<i+1<<": "<<val1<<" "<<val2<<endl;
    }
}
