#include <Rcpp.h>
using namespace Rcpp;
using namespace std;

// [[Rcpp::export]]
NumericMatrix addC(NumericMatrix  A, NumericVector x) {
  if(x.size() == A.nrow()){
    NumericMatrix NewA(A.nrow() , A.ncol()+1);
    NumericVector aux;
    for(int i =0; i < x.size();i++){
      aux = A.row(i);
      aux.push_back(x(i));
      NewA.row(i) = aux;
    }
    return(NewA);
  } 
  Rcout << "Longitud invalida del vector" << "\n";
  Rcout << "Longitud del vector = " << x.size() << "\n";
  Rcout << "Cantidad de filas de la matriz = " << A.nrow()<< "\n";
  return 1;
}

