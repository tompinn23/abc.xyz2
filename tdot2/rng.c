#include "rng.h"

#include <stdint.h>

#include "z-mem.h"

const size_t MT_SIZE = 624;
const size_t MT_PERIOD = 397;
const size_t MT_DIFF = MT_SIZE - MT_PERIOD;

const uint32_t MAGIC = 0x9908b0df;

typedef struct _rng {
	uint32_t MT[MT_SIZE];
	uint32_t MT_TEMPERED[MT_SIZE];
	size_t index = MT_SIZE;
} _rng;

_rng* create_rng(uint32_t seed)
{
	_rng* rng = mem_alloc(sizeof(_rng));
	rng->MT[0] = seed;
	rng->index = MT_SIZE;
	for (uint_fast32_t i = 1; i < MT_SIZE; ++i)
	{
		rng->MT[i] = 0x6c078965 * (rng.MT[])
	}
}
