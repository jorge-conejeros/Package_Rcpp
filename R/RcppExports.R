
#' @title Add a column to an array
#' @description Given an mxn array and a vector, if size of vector equal to number of row of array, 
#' added the vector in to array as column
#' @param A Array
#' @param x Vector to add
#' @return Numeric Matrix with A and added x as column
#' @examples 
#' NewArray <- addColumn(myArray, c(1,2,3,4));
#' @export
addC <- function(A, x) {
    .Call(`_pkcpp_addC`, A, x)
}

#' @title Add a row to an array
#' @description Given an mxn array and a vector, if size of vector equal to number of column of array, 
#' added the vector in to array as row
#' @param A Array
#' @param x Vector to add
#' @return Numeric Matrix with A and added x as row
#' @examples 
#' NewArray <- addRow(myArray, c(1,2,3,4));
#' @export
addR <- function(A, x) {
    .Call(`_pkcpp_addR`, A, x)
}

#' @title Search of maximum Values
#' @description Given an nxn array, returns the maximum value found and the index where they are found
#' @param A Array
#' @return Data frame with the index the maximum value
#' @examples 
#' MaxValue <- SearchMax(myMatrix);
#' @export
SearchMax <- function(x) {
  .Call(`_pkcpp_SearchMax`, x)
}

#' @title Search of Minimum Values
#' @description Given an nxn array, returns the minimum value found and the index where they are found
#' @param A Array
#' @return Data frame with the index the minimum value
#' @examples 
#' MinValue <- SearchMin(myMatrix);
#' @export
SearchMin <- function(x) {
  .Call(`_pkcpp_SearchMin`, x)
}

#' @title Maxmin Convolution between two matrices equal squares
#' @description Get the minimum elements between the row of A with the column of B, 
#' then take the maximum value between the minimums and store it in an array C
#' @param A Array
#' @param B Array
#' @return Numeric Matrix with the maxmin elements
#' @examples 
#' C <- MaxMin(myArray1, myArray2);
#' @export
MaxMin <- function(A, B) {
  .Call(`_pkcpp_MaxMin`, A, B)
}

#' @title Matrix Multiplications
#' @description Given a matrix A and a matrix B, returns the multiplication between A and B
#' @param A Array
#' @param B Array
#' @return Numeric Matrix with the result of A x B
#' @examples 
#' C <- MxM(myMatrix1 , myMatrix2);
#' @export
MxM <- function(A, B) {
  .Call(`_pkcpp_MxM`, A, B)
}

