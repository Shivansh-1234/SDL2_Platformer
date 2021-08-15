#include "CameraController.h"

void CameraController::update(){
	if (target != NULL){
		//great, we're following someone
		float targetX = target->x - Globals::camera.w / 2;
		float targetY = target->y - Globals::camera.h / 2;

		//MOVE TO TARGET POSITION
		Globals::camera.x += ((targetX)-Globals::camera.x)*lerp * TimeController::timeController.dT;
		Globals::camera.y += ((targetY)-Globals::camera.y)*lerp * TimeController::timeController.dT;

		//if just lock on hero, no movemnt
		//Globals::camera.x = targetX;
		//Globals::camera.y = targetY;
	}
	//else, dont follow
}