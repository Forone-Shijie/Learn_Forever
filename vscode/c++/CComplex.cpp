#include <iostream>
#include "CComplex.h"

using namespace std;

void CComplex::SetValue(double zR, double zI){
    mR = zR;
    mR = zI;
}

void CComplex::ShowValue(){
    cout << mR << "+" << mI << "i" << endl;
}
CComplex CComplex::Add(CComplex zC){

    CComplex zSum;
    zSum.mR = mR + zC.mR;
    zSum.mI = mI + zC.mI;
    return zC;
}

int main (){
    CComplex zC1, zC2;
    zC1.SetValue(5,4);
    zC2.SetValue(6,1);
    zC1.ShowValue();
    zC2.ShowValue();
    zC1.Add(zC2);
    zC1.ShowValue();
    
    return 0;
}