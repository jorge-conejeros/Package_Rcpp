#include <Rcpp.h>
using namespace Rcpp;
using namespace std;

// [[Rcpp::export]]
DataFrame SearchMin_Rcpp(NumericMatrix  x) {
  int n = 0;
  int filas = x.nrow();
  int columnas = x.ncol();
  double vMin = x(0,0);
  IntegerVector iMin;
  DataFrame TMin;
  for(int f = 0; f < filas;f++){
    for(int c = 0; c < columnas;c++){
      if(x(f,c)==vMin){
        iMin = IntegerVector::create(Named("Row",f+1),Named("Column",c+1));
        TMin.insert(n,iMin);
        n++;
      }
      if(x(f,c)<vMin){
        vMin = x(f,c);
        n = 0;
        TMin.erase(0,TMin.size());
        iMin = IntegerVector::create(Named("Row",f+1),Named("Column",c+1));
        TMin.insert(n,iMin);
        n++;
      }
    }
  }
  Rcout << "Valor Maximo encontrado -> ( " << vMin << " ) en las posiciones: \n|row | col|\n";
  return(TMin);
}
