#include <iostream>
using namespace std;

class PersegiPanjang {
    public :
       float panjang;
       float lebar;
       float luas;
   
       void inputData(){
        cout << "input panjang : ";
        cin >> panjang;
        cout << "input lebar : ";
        cin >> lebar;
       }

       void menghitungLuas(){
        luas = panjang*lebar;
        cout << "luas persegi panjang = " << luas << endl;
       }

       void outputData(){
    
       }
};

int main ()
{
    PersegiPanjang per ;
    per.inputData();
    per.menghitungLuas();
    per.outputData();
    return 0;
};
};