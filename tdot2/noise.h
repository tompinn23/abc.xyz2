#pragma once


#ifdef FN_USE_DOUBLES
typedef double FN_DECIMAL;
#else
typedef float FN_DECIMAL;
#endif


struct noise {
	unsigned char perm[512];
	unsigned char perm12[512];
	int seed = 1337;
	FN_DECIMAL freq = FN_DECIMAL(0.01);
	int octaves = 3;
	FN_DECIMAL lacunarity = FN_DECIMAL(2);
	FN_DECIMAL gain = FN_DECIMAL(0.5);
	FN_DECIMAL fractalBounding;
};



FN_DECIMAL get_p_noise_value(FN_DECIMAL x);
FN_DECIMAL get_p_noise_value2(FN_DECIMAL x, FN_DECIMAL y);
FN_DECIMAL get_p_noise_value3(FN_DECIMAL x, FN_DECIMAL y, FN_DECIMAL z);

FN_DECIMAL get_pf_noise_value(FN_DECIMAL x);
FN_DECIMAL get_pf_noise_value2(FN_DECIMAL x, FN_DECIMAL y);
FN_DECIMAL get_pf_noise_value3(FN_DECIMAL x, FN_DECIMAL y, FN_DECIMAL z);