#include <stdio.h>
#include <stdint.h>

/* The state word must be initialized to non-zero */
uint32_t xorshift32(uint32_t state[]) {
	/* Algorithm "xor" from p. 4 of Marsaglia, "Xorshift RNGs" */
	uint32_t x = state[0];
	x ^= x << 13;
	x ^= x >> 17;
	x ^= x << 5;
	state[0] = x;
	return x;
}

uint64_t xorshift64(uint64_t state[]) {
	uint64_t x = state[0];
	x ^= x << 13;
	x ^= x >> 7;
	x ^= x << 17;
	state[0] = x;
	return x;
}

int main() {
	uint32_t state[1] = { 1234 };  // "seed" (can be anthing but 0)

	for (int i = 0; i < 50; i++) {
		printf("%u\n", xorshift32(state));
	}

	uint64_t state64[1] = { 1234 };  // "seed" (can be anthing but 0)

	for (int i = 0; i < 50; i++) {
		printf("%llu\n", xorshift64(state64));
	}
}