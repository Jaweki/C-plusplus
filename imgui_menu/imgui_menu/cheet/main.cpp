#include "gui.h"

#include <thread>

int __stdcall wWinMain(
	HINSTANCE hInstance,
	HINSTANCE hpreviousInstance,
	PWSTR pCmdLine,
	int nCmdShow)
{
	//create gui
	gui::CreateHWindow("Cheat Menu", "Cheat Menu Class");
	gui::CreateDevice();
	gui::CreateImGui();

	while (gui::exit)
	{
		gui::BeginRender();
		gui::Render();
		gui::EndRender();

		std::this_thread::sleep_for(std::chrono::milliseconds(10));
	}

	//destroy gui
	gui::DestroyImGui();
	gui::DestroyDevice();
	gui::DestroyHWindow();

	return EXIT_SUCCESS;
}