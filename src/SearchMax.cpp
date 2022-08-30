#include <Rcpp.h>
using namespace Rcpp;
using namespace std;

// [[Rcpp::export]]
DataFrame SearchMax(NumericMatrix  x) {
  int n = 0;
  int filas = x.nrow();
  int columnas = x.ncol();
  double vMax = x(0,0);
  IntegerVector iMax;
  DataFrame TMax;
  for(int f = 0; f < filas;f++){
    for(int c = 0; c < columnas;c++){
      if(x(f,c)==vMax){
        iMax = IntegerVector::create(Named("Row",f+1),Named("Column",c+1));
        TMax.insert(n,iMax);
        n++;
      }
      if(x(f,c)>vMax){
        vMax = x(f,c);
        n = 0;
        TMax.erase(0,TMax.size());
        iMax = IntegerVector::create(Named("Row",f+1),Named("Column",c+1));
        TMax.insert(n,iMax);
        n++;
      }
    }
  }
  Rcout << "Valor Maximo encontrado -> ( " << vMax << " ) en las posiciones: \n|row | col|\n";
  return(TMax);
}
