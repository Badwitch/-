#include<iostream>
#include "elevator.h"
#include<math.h>
int elevator::move(int i,int j)
{
	i += abs(i - j); 
	return i;
}
elevator::elevator()
{
	
}

elevator::~elevator()
{
	
}
