

#ifndef INC_SIGNAL_H_
#define INC_SIGNAL_H_

#include "main.h"

#define TURN_LEFT_S	    1
#define TURN_RIGHT_S 	2
#define GO_FORWARD_S 	3
#define GO_BACKWARD_S	4
#define TEST_SENSORS 	5

extern uint8_t LEFT[8];
extern uint8_t RIGHT[8];
extern uint8_t FORWARD[8];
extern uint8_t BACKWARD[8];

uint8_t Get_State(int d1, int d2);
#endif /* INC_SIGNAL_H_ */
