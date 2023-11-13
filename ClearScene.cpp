#include "ClearScene.h"
#include <Novice.h>
#include "Input.h"

void ClearScene::Initialize(){



}

void ClearScene::Update(){

	if (Input::GetInstance()->TriggerKey(DIK_SPACE)) {
		sceneNo_ = TITLE;
	}

}

void ClearScene::Draw(){

	Novice::ScreenPrintf(620, 160, "CLEAR");
	Novice::ScreenPrintf(600, 500, "Push Space");

}
