# Variables de prueba
mA <- matrix(1:12, nrow = 3, ncol = 4)
mB <- matrix(12:1, nrow = 3, ncol = 4)
auxV <- c(13,14,15,16)

# cbind() 
addC(mA,auxV) # <- ERROR
auxV <- c(13,14,15)
addC(mA,auxV) # <- BIEN

# rbind()
auxV <- c(13,14,15,16)
addR(mA,auxV)

# Wich.max()
SearchMax(mA)
SearchMax(mB)

# Wich.min()
SearchMin(mA)
SearchMin(mB)

# MaxMin()
mA <- matrix(1:16, nrow = 4, ncol = 4)
mB <- matrix(16:1, nrow = 4, ncol = 4)
MaxMin(mA,mB)

# Multiplicacion de matrices
MxM(mA,mB) # <- Error
mA <- matrix(1:12, nrow = 3, ncol = 4)
mB <- matrix(12:1, nrow = 4, ncol = 3)
MxM(mA,mB) # <- Bien


