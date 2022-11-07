#!/bin/bash
ar liball.a

gcc -c ./ *.c
ar -rc liball.a ./ *.o
ranlib liball.a
