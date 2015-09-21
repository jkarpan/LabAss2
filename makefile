#
#	THIS MAKEFILE IS FOR
#	ASSIGNMENT 2
#

LabAss2: LabAss2.o
	g++ LabAss2.o -o LabAss2

LabAss2.o:
	g++ -c LabAss2.cpp

clean:
	rm *.o LabAss2
