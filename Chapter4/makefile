all: square_num vectors lfunctions


square_num: square_num.cpp
	g++ square_num.cpp -o square_num

vectors: vectors.cpp
	g++ vectors.cpp -std=c++11 -o vectors

# always ending with the main file
lfunctions: lfunctions.cpp
	g++ func_sign.cpp func_abs.cpp lfunctions.cpp -o lfunctions

clean:
	rm *.txt
	rm square_num
	rm vectors
	rm lfunctions