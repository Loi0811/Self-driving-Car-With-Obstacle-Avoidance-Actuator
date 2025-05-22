#include "SIGNAL.h"

uint8_t LEFT[] 		= { 1, 0, 0, 0, 0, 0, 0, 0 };
uint8_t RIGHT[] 	= { 2, 0, 0, 0, 0, 0, 0, 0 };
uint8_t FORWARD[] 	= { 3, 0, 0, 0, 0, 0, 0, 0 };
uint8_t BACKWARD[] 	= { 4, 0, 0, 0, 0, 0, 0, 0 };

uint8_t Get_State(int distanceLeft, int distanceRight)
{
	if (distanceLeft <= 600 || distanceRight <= 600) {
		return GO_BACKWARD_S;
	} else{
		if (distanceRight <= distanceLeft) {
				if ((distanceRight>600)&&(distanceRight <= 900)) return TURN_LEFT_S;
			} else if (distanceLeft < distanceRight) {
				if ((distanceLeft>600)&&(distanceLeft <= 900)) return TURN_RIGHT_S;
			}
	}
	return GO_FORWARD_S;
}


