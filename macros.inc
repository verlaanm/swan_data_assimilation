##############################################################################
# IA32_Intel/x86-64_Intel:	Intel Pentium with Linux using Intel compiler 9.1.
##############################################################################
F90_SER = ifort
F90_OMP = ifort
F90_MPI = mpif90
FLAGS_OPT = -O2
FLAGS_MSC = -W0 -assume byterecl -traceback
FLAGS90_MSC = $(FLAGS_MSC)
FLAGS_SER =
FLAGS_OMP = -openmp
FLAGS_MPI =
FLAGS_NETCDF = -lnetcdff
INCS_SER =
INCS_NETCDF =-I/opt/netcdf/include
INCS_OMP =
INCS_MPI =
LIBS_SER =
LIBS_NETCDF =-L/opt/netcdf/lib
LIBS_OMP =
LIBS_MPI =
OUT = -o 
EXTO = o
MAKE = make
RM = rm -f
swch = -unix -impi -cdate12 -netcdf 
