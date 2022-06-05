#pragma once
#include <stdio.h>
#include <stdint.h>

/* The state word must be initialized to non-zero */
uint32_t xorshift32(uint32_t seed[]) {
	if (seed[0] == NULL)
	{
		return -1;
	}
	uint32_t x = seed[0];
	x ^= x << 13;
	x ^= x >> 17;
	x ^= x << 5;
	seed[0] = x;
	return x;
}

uint64_t xorshift64(uint64_t seed[]) {
	if (seed[0] == NULL)
	{
		return -1;
	}
	uint64_t x = seed[0];
	x ^= x << 13;
	x ^= x >> 7;
	x ^= x << 17;
	seed[0] = x;
	return x;
}