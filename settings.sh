#! /bin/sh
#
# Settings for use of NetCDF library
export NETCDF_ROOT=/opt/netcdf
export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:$NETCDF_ROOT/lib

# Add directory with SWAN executable tot PATH
export PATH=$PATH:$PWD

