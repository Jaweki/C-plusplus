#pragma once
#include <d3d9.h>

namespace gui
{
	//constant window size
	constexpr int WIDTH = 1366;
	constexpr int HEIGHT = 768;

	inline bool exit = true;

	// winapi windows vars
	inline HWND window = nullptr;
	inline WNDCLASSEXA windowClass = { };

	// points for windo movement
	inline POINTS position = { };

	//direct x state vars
	inline PDIRECT3D9 d3d = nullptr;
	inline LPDIRECT3DDEVICE9 device = nullptr;
	inline D3DPRESENT_PARAMETERS presentParameters = { };

	//handle window creation & destruction
	void CreateHWindow(
		const char* windowName,
		const char* className
	) noexcept;
	void DestroyHWindow() noexcept;

	//handle device creation & destruction
	bool CreateDevice() noexcept;
	void ResetDevice() noexcept;
	void DestroyDevice() noexcept;

	// handle ImGui creation & destruction
	void CreateImGui() noexcept;
	void DestroyImGui() noexcept;

	void BeginRender() noexcept;
	void EndRender() noexcept;
	void Render() noexcept;

}