# Variables de prueba
mA <- matrix(1:12, nrow = 3, ncol = 4)
mB <- matrix(12:1, nrow = 3, ncol = 4)
auxV <- c(13,14,15,16)

# cbind() 
addColumn_rcpp(mA,auxV) # <- ERROR
auxV <- c(13,14,15)
addColumn_rcpp(mA,auxV) # <- BIEN

# rbind()
auxV <- c(13,14,15,16)
addRow_rcpp(mA,auxV)

# Wich.max()
SearchMax(mA)

# Wich.min()
SearchMin_Rcpp(mA)

