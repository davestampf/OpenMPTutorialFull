//
// This is a boring serial program
//

#include <stdio.h>
#include <limits.h>

int main(int argc, char** argv) {

	for (int i = INT_MIN; i < INT_MAX; i++) ;
	printf("Done with first pass\n");

	for (int i = INT_MIN; i < INT_MAX; i++) ;
	printf("Done with second pass\n");

	for (int i = INT_MIN; i < INT_MAX; i++) ;
	printf("Done with third pass\n");

	for (int i = INT_MIN; i < INT_MAX; i++) ;
	printf("Done with fourth pass\n");
}

