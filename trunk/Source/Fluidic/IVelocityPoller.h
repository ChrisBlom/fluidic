/*
Copyright (c) 2010 Steven Leigh

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
*/

#pragma once

#include "Vector.h"

namespace Fluidic 
{
	/**
	 * Interface to allow an object to receive the velocity of the fluid at its position
	 * every 20 frames
	 */
	class IVelocityPoller
	{
	public:
		~IVelocityPoller(void){}

		/**
		 * Abstract callback method that receives the updated velocity
		 *
		 * @param velocity velocity at the object's current position.
		 */
		virtual void UpdateVelocity(const Vector &velocity)=0;

		/**
		 * Returns the current position of the object
		 */
		const Vector &GetPosition() { return mPosition; }

	protected:
		IVelocityPoller(Vector pos) : mPosition(pos){}

		Vector mPosition;
	};

}