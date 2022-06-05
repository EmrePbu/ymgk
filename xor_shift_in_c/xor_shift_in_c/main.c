#include "xorshift.h"

int main() {
	uint32_t state[1] = { 1234 };  // "seed" (can be anthing but 0)

	for (int i = 0; i < 5; i++) {
		printf("%u\n", xorshift32(state));
	}
	printf("\r\n");
	uint64_t state64[1] = { 1234 };  // "seed" (can be anthing but 0)

	for (int i = 0; i < 5; i++) {
		printf("%llu\n", xorshift64(state64));
	}
}