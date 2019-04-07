#include<bits/stdc++.h>
using namespace std;
int main(){
    string input;
    ifstream fi;
    fi.open("air_quality_Nov2017.csv");

    if(fi.is_open()){
        cout<<"File Open Successfully"<<endl;

    }

    else{
        cout<<"Error "<<endl;
    }

    cout<<"Enter search word: ";
    cin>>input;

    string line ;

    while(getline(fi, line)){
        if(line.find(input) != string::npos){
            cout<<line<<endl;

        }
        else{
            cout<<input<<"Not Found"<<endl;
        }
    }

    fi.close();
    char anykey;
    cout<<"Press any key"<<endl;
    cin>>anykey;
return 0;
}
