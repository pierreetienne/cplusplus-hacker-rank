g++ -std=c++17 -Wshadow -Wall -o $1.exe $1 -O2 -Wno-unused-result -Wsizeof-pointer-div
if test -f "$1.exe"; then
	./$1.exe
	rm -fr $1.exe
fi

