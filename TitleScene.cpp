#include "TitleScene.h"
#include <Novice.h>
#include "Input.h"

void TitleScene::Initialize() {



}

void TitleScene::Update(){


	if (Input::GetInstance()->TriggerKey(DIK_SPACE)) {
		sceneNo_ = STAGE;
	}

}

void TitleScene::Draw(){

	Novice::ScreenPrintf(620, 160, "TITLE");
	Novice::ScreenPrintf(600, 500, "Push Space");

}
