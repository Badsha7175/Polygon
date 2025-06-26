#include <bits/stdc++.h>

#include "testlib.h"


int main(int argc, char* argv[]) {
	registerGen(argc, argv, 1);
	
	std::vector<int> MANUAL_TESTS = {2016, 2020, 1}; 

	int tci = std::stoi(std::string(argv[1]));
	int mtc = int(MANUAL_TESTS.size());

	if(tci <= mtc) {
		println(MANUAL_TESTS[tci - 1]);
		return 0;
	}


	int n = rnd.next(1, 3000);
	println(n);


	// rnd.next(100)    .................random number in range [0, 99]
	// rnd.next(10, 20)    ..............random number in range [10, 20]
	// rnd.next("[A-Za-z0-9]{5,10}")  ...random string of length 5 to 10 with alphanumeric characters
	// rnd.next("A{3,5}B{2,4}")    ......random string with 3 to 5 'A's followed by 2 to 4 'B's
	// rnd.next("one|two|three")    .....random word out of 'one', 'two' and 'three'
	// rnd.next("[1-9][0-9]{99}")    ....random 100-digit number as a string
}

/*

<#list 1..10 as s>
    Generator_name  ${s} > $
</#list>

*/
