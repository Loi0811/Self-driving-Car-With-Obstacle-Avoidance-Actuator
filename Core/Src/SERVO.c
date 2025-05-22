#include "SERVO.h"

void Start_Servo()
{
	HAL_TIM_PWM_Start(&htim4, TIM_CHANNEL_1);
	To_Default();
	HAL_Delay(100);
}

uint16_t Angle(double angle)
{
	double temp = 250 + angle * 5.56;
	return (int)temp;
}

void To_Default()
{
	__HAL_TIM_SET_COMPARE(&htim4,TIM_CHANNEL_1, Angle(90));
}

void To_Angle(uint16_t CurrentAngle, uint16_t DesignAngle, uint8_t mode, uint16_t increase)
{
	if (mode == FAST) {
		__HAL_TIM_SET_COMPARE(&htim4,TIM_CHANNEL_1, Angle(DAngle));
	} else {
		while (CurrentAngle < DesignAngle) {
			__HAL_TIM_SET_COMPARE(&htim4,TIM_CHANNEL_1, Angle(CurrentAngle));
			HAL_Delay(80);
			CAngle += increase;
		}
	}
}

void Turn_Left()
{
	__HAL_TIM_SET_COMPARE(&htim4,TIM_CHANNEL_1, Angle(40));
}

void Turn_Right()
{
	__HAL_TIM_SET_COMPARE(&htim4,TIM_CHANNEL_1, Angle(145));
}
