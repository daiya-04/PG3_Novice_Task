#include <Novice.h>
#include <memory>
#include "GameManager.h"

const char kWindowTitle[] = "LE2A_12_セト_ダイヤ";

// Windowsアプリでのエントリーポイント(main関数)
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {

	// ライブラリの初期化
	Novice::Initialize(kWindowTitle, 1280, 720);

	std::unique_ptr<GameManager> game = std::make_unique<GameManager>();

	game->Run();

	// ライブラリの終了
	Novice::Finalize();
	return 0;
}
