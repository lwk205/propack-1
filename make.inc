FFLAGS = -fno-second-underscore -Wall -Wextra -pedantic -Wno-compare-reals     \
    -O3 -march=native
FC = gfortran
LINKER = gfortran
MAKELIB = ar rcs

BLAS = -llapack -lblas
MGS = mgs.risc
