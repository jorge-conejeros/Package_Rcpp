#include <Rcpp.h>
using namespace Rcpp;
using namespace std;

// [[Rcpp::export]]
NumericMatrix addRow_rcpp(NumericMatrix  A, NumericVector x) {
  if(x.size() == A.ncol()){
    NumericMatrix NewA(A.nrow()+1 , A.ncol());
    NumericVector aux;
    for(int i =0; i < x.size();i++){
      aux = A.column(i);
      aux.push_back(x(i));
      NewA.column(i) = aux;
    }
    return(NewA);
  }
  Rcout << "Longitud invalida del vector" << "\n";
  Rcout << "Longitud del vector = " << x.size() << "\n";
  Rcout << "Cantidad de columnas de la matriz = " << A.ncol()<< "\n";
  return 1;
}

