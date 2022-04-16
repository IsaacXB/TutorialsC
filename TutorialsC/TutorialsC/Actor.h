#pragma once
#include "Object.h"
//child object -> Actor
class Actor : public Object
{
public:
	virtual void BeginPlay() override;
};

