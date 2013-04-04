#pragma once

#include "cs455Utils.h"
#include "Object.h"

class MovingObject : public Object
{
protected:

	Vector455			*position;
	Vector455			*velocity;
	Vector455			*acceleration;

public:

	/**
	 * Constructor/Destructor
	 */
	MovingObject(void);
	~MovingObject(void);

	void UpdateMovement(float deltaTime);
};
