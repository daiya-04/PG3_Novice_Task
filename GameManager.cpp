#include "GameManager.h"
#include <Novice.h>
#include "Input.h"

GameManager::GameManager() {

	sceneArr_[STAGE] = std::make_unique<StageScene>();

	currentSceneNo_ = STAGE;
	preSceneNo_ = STAGE;

	sceneArr_[currentSceneNo_]->Init();

}

GameManager::~GameManager(){}

int GameManager::Run() {

	// ウィンドウの×ボタンが押されるまでループ
	while (Novice::ProcessMessage() == 0) {
		// フレームの開始
		Novice::BeginFrame();

		preSceneNo_ = currentSceneNo_;
		currentSceneNo_ = sceneArr_[currentSceneNo_]->GetSceneNo();

		if (preSceneNo_ != currentSceneNo_) {
			sceneArr_[currentSceneNo_]->Init();
		}

		///
		/// ↓更新処理ここから
		///

		sceneArr_[currentSceneNo_]->Update();

		///
		/// ↑更新処理ここまで
		///

		///
		/// ↓描画処理ここから
		///

		sceneArr_[currentSceneNo_]->Draw();

		///
		/// ↑描画処理ここまで
		///

		// フレームの終了
		Novice::EndFrame();

		// ESCキーが押されたらループを抜ける
		if (Input::GetInstance()->TriggerKey(DIK_ESCAPE)) {
			break;
		}
	}
	return 0;
}
