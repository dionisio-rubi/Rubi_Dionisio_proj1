all: proj1

proj1: main.o AddingHex.o FileManager.o
	g++ -o proj1 main.o AddingHex.o FileManager.o

main.o: main.cpp
	g++ -c main.cpp

AddingHex.o: AddingHex.cpp AddingHex.h
	g++ -c AddingHex.cpp

FileManager.o: FileManager.cpp FileManager.h
	g++ -c FileManager.cpp

clean:
	rm -f *.o proj1


# # modify this makefile based on your requirement

# OUTPUT = proj1
# INCLIB= AddingHex.h FileManager.h #write your header file if you have any
# SOURCE = main.cpp #write your .cpp file name
# all: $(OUTPUT)


# $(OUTPUT): $(OUTPUT).o
# 	g++ -o $@ $@.o -std=c++11


# $(OUTPUT).o: $(SOURCE) $(INCLIB)
# 	g++ -c $< -std=c++11 -o $@

# clean:
# 	rm -f $(OUTPUT) $(OUTPUT).o