#include<iostream> // cout stuff
#include<fstream> // ofstream stuff like text file opening and writing an input
using namespace std;
int main(){
    ofstream outfile;  // cout replacement

    // attempt to open the text file
    outfile.open("file.txt");

    // to verify if the file opened
    if(outfile.is_open()){
        cout<<"Yes"<<endl;

        // process the file
        outfile<<8<<endl;
        outfile<<88<<endl;
        outfile<<888<<endl;

        // to close the file
        outfile.close();
    }else{
        cout<<"ERROR !!!"<<endl;
    }

    return 0;
}
