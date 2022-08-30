#include <Rcpp.h>
using namespace Rcpp;
using namespace std;

// [[Rcpp::export]]
NumericMatrix MxM(NumericMatrix A,NumericMatrix B) {
  int Ac = A.ncol();
  int Br = B.nrow();
  if(Ac == Br){ // Validacion para multiplicar
    NumericMatrix C(A.nrow(),B.ncol()); //Matriz resultante
    NumericVector auxV; //Valor Auxiliar
    double aux2; // Valor Auxiliar 2
    for(int c = 0; c < B.ncol();c++){
      for(int f = 0; f < A.nrow();f++){
        aux2 = 0.0;
        NumericMatrix::Column auxcol = B(_,c); // Columna como Vector
        NumericMatrix::Row    auxrow = A(f,_); // Fila como  vector
        auxV = auxrow * auxcol; // Multiplicacion de vectores
        for(int ai = 0; ai < auxV.size(); ai++){ // Suma de los valores 
          aux2 = aux2 + auxV(ai);
        }
        C(f,c) = aux2; //Asignaci?n de valor
      }
    }
    return(C);
  }
  Rcout << "Dimensiones incompatibles para multiplicar" << "\n";
  return(1);
}


