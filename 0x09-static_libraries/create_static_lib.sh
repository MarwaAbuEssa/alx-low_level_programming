#!/bin/bash
gcc -c *.c
ar rc liball.s *.o
ranlib liball.a
