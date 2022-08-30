#include <Rcpp.h>
using namespace Rcpp;
using namespace std;

// [[Rcpp::export]]
NumericMatrix MaxMin(NumericMatrix A, NumericMatrix B) {
  int n = A.nrow();
  NumericMatrix C(n);
  for(int f = 0; f < n; f++){
    for(int c = 0; c < n; c++){
      NumericVector aux(n);
      for(int i_n = 0; i_n < n; i_n++){
        if(A(f,i_n) < B(i_n,c)){
          aux.insert(i_n,A(f,i_n));
        }else{
          aux.insert(i_n,B(i_n,c));
        }
      }
      C(f,c) = max(aux);
    }
  }
  return C;
}
