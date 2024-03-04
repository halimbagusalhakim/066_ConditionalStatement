#include <iostream>
using namespace std;
int main()
{
    int nBilanganA, nBilanganB;
    string status;
    srand(time(0));
    nBilanganA = rand() %10;
    nBilanganB = rand() %10;
    cout << "bilangann a adalah = "<< nBilanganA<< endl;
    cout << "bilangan b adalah = "<< nBilanganB<< endl;

    if (nBilanganA == nBilanganB){
        status = "bilangan A sama besar dengan bilangan B";
    }
    else if (nBilanganA > nBilanganB){
        status = "bilangan A lebih besar ";
    }
    else {
        status = "bilangan A lebih kecil ";
    }
    

    
    cout <<"statusnya adalah = " << status <<endl; 
    return 0;

    


}