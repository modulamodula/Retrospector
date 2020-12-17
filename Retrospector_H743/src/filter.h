#pragma once

#include "initialisation.h"
#include <cmath>

#define FIRTAPS 50
#define M_PI           3.14159265358979323846

extern bool activateFilter;
extern uint8_t activeFilter;		// choose which set of coefficients to use
extern float firCoeff[2][FIRTAPS];

void InitFilter(float omegaC);
float Sinc(float x);