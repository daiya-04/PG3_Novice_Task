#include "InputHandle.h"
#include <Novice.h>

void InputHandle::AssignMoveLeftCommand2PressKeyA() {
	ICommand* command = new MoveLeftCommand();
	pressKeyA_ = command;
}

void InputHandle::AssignMoveRightCommand2PressKeyD() {
	ICommand* command = new MoveRightCommand();
	pressKeyD_ = command;
}

ICommand* InputHandle::HandleInput() {
	if (Novice::CheckHitKey(DIK_A)) {
		return pressKeyA_;
	}
	if (Novice::CheckHitKey(DIK_D)) {
		return pressKeyD_;
	}

	return nullptr;
}
