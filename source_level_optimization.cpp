int __add(int a, int b) {
	return a + b;
}

int main(int argc, char** argv) {

	if (argc < 2)
		return 0;

	const int num = argv[1][0] - '0';
	const int result =  __add(num, num) + 
				 		__add(num, num) * 2 +
				 		__add(num, num) * 3;
	return result;
}


// // ======================================
// int __add(int a, int b) {
// 	return a + b;
// }

// int main(int argc, char** argv) {

// 	if (argc < 2)
// 		return 0;

// 	const int num = argv[1][0] - '0';
// 	const int temp = __add(num, num);
// 	const int result =  temp + 
// 				 		temp * 2 +
// 				 		temp * 3;
// 	return result;
// }



// // ======================================
// int main(int argc, char** argv) {

// 	if (argc < 2)
// 		return 0;

// 	const int num = argv[1][0] - '0';
// 	const int temp = num + num;
// 	const int result =  temp + 
// 				 		temp * 2 +
// 				 		temp * 3;
// 	return result;
// }

