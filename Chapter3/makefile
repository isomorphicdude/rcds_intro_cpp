all: signed square_num save_to_file read_from_file


square_num: square_num.cpp
	g++ square_num.cpp -o square_num

save_to_file: save_to_file.cpp
	g++ save_to_file.cpp -o save_to_file

read_from_file: read_from_file.cpp
	g++ read_from_file.cpp -o read_from_file


clean:
	rm *.txt
	rm square_num
	rm save_to_file
	rm read_from_file