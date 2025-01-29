#Makefile

#Compiler
CC = gcc #CC is a variable that holds the name of the compiler we're using, which is gcc.

#Files
FILES= Sum.c #FILES is a variable that holds the name of the source file, HelloWorld.c.
OUT_EXE= Sum.out #OUT_EXE is a variable that holds the name of the output executable file, HelloWorld.out.

#Build,is a target that compiles the program.
build: $(FILES) #is a dependency for the build target, must be present for the build target to execute
	$(CC) -o $(OUT_EXE) $(FILES)
	

#Run, is a target that first ensures the program is compiled by running the build target.
run: build # runs the program
	./$(OUT_EXE) 


#Clean,  is a target that deletes the compiled program and any object files.
clean: # removes all files with the .o extension (object files) and the HelloWorld.out executable file.
	rm -f *.o $(OUT_EXE)
