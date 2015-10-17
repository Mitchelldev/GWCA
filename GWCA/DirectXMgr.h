#pragma once

#include <Windows.h>

#include <d3d9.h>
#include <d3dx9.h>

#pragma comment(lib, "d3d9.lib")
#pragma comment(lib, "d3dx9.lib")

#include "Hooker.h"
#include "GWCAManager.h"

namespace GWAPI {

	class DirectXMgr : public GWCAManager {
		friend class GWAPIMgr;

	public:
		typedef HRESULT(WINAPI *EndScene_t)(IDirect3DDevice9* pDevice);
		typedef HRESULT(WINAPI *Reset_t)(IDirect3DDevice9* pDevice, D3DPRESENT_PARAMETERS* pPresentationParameters);

		void CreateRenderHooks(EndScene_t _endscene, Reset_t _reset);
		void RestoreHooks();

		inline EndScene_t EndsceneReturn() { return endscene_; }
		inline Reset_t ResetReturn() { return reset_; }


	private:
		DirectXMgr(GWAPIMgr& api);
		~DirectXMgr();

		EndScene_t endscene_ = NULL;
		Reset_t reset_ = NULL;

		Hook hk_endscene_;
		Hook hk_reset_;

		bool hooked_ = false;

		DWORD* vtable_start_ = 0;
	};

}