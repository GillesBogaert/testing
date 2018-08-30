#pragma once
#include "endianness.h";


	void switch_endianness(uint16_t *x) {

		uint16_t value = (*x >> 8) | (*x << 8);
		*x = value;

	}

	void switch_endianness(uint32_t *x) {
		uint32_t value = ((*x >> 24) & 0xff) | 
			((*x << 8) & 0xff0000) | 
			((*x >>8) & 0xff00) | 
			((*x << 24) & 0xff000000); 

		*x = value;
	}