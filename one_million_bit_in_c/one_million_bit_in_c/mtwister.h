#ifndef __MTWISTER_H
#define __MTWISTER_H

#define STATE_VECTOR_LENGTH 624
#define STATE_VECTOR_M      397 

typedef struct tagMTRand {
	unsigned long mt[STATE_VECTOR_LENGTH];
	int index;
} MTRand;

MTRand seedRand(unsigned long seed);
unsigned long genRandLong(MTRand* rand);
double genRand(MTRand* rand);

#endif /* #ifndef __MTWISTER_H */