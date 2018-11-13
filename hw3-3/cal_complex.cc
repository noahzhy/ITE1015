#include <iostream>
#include <iomanip>
using namespace std;

typedef struct{
  double realNumber;
  double imaginaryNumbers;
} ComplexNumber;

void printComplex(ComplexNumber *cn) {
  cout<<setiosflags(ios::fixed);
  cout<<setprecision(6)<<cn->realNumber<<" + "<<cn->imaginaryNumbers<<"i"<<endl;
}

void printAddComp(ComplexNumber *cn1, ComplexNumber *cn2) {
  ComplexNumber sum;
  sum.realNumber = cn1->realNumber + cn2->realNumber;
  sum.imaginaryNumbers = cn1->imaginaryNumbers + cn2->imaginaryNumbers;
  printComplex(&sum);
}

void printMulComp(ComplexNumber *cn1, ComplexNumber *cn2) {
  ComplexNumber mul;
  mul.realNumber = cn1->realNumber * cn2->realNumber - cn1->imaginaryNumbers * cn2->imaginaryNumbers;
  mul.imaginaryNumbers = cn1->realNumber * cn2->imaginaryNumbers + cn1->imaginaryNumbers * cn2->realNumber;
  printComplex(&mul);
}

int main() {
  ComplexNumber cn[2];
  for (size_t i = 0; i < 2; i++) {
    cin>>cn[i].realNumber>>cn[i].imaginaryNumbers;
  }
  for (size_t j = 0; j < 2; j++) {
    cout<<"complex number "<<j+1<<":"<<endl;
    printComplex(&cn[j]);
  }
  cout<<"the sum of two complex numbers:"<<endl;
  printAddComp(&cn[0],&cn[1]);
  cout<<"the product of two complex numbers:"<<endl;
  printMulComp(&cn[0],&cn[1]);
  return 0;
}
