// dllmain.cpp : Defines the entry point for the DLL application.
#include "stdafx.h"
#include "NewDll.h"
#include <iostream>


BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
                     )
{
	int val;
	std::string s;
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
		MessageBoxW(NULL, L"Calling create Hooks", L"Calling create Hooks", MB_OK);
		val = create_hooks();
		MessageBoxW(NULL, L"Created Hooks : ", L"Calling create Hooks", MB_OK);
		std::cout << "attach value : " << val << std::endl;
		break;

    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
		//val = destroy_hooks();
		//MessageBoxW(NULL, L"Destroyed Hooks", L"Destroyed Hooks", MB_OK);
		//std::cout << "destroy value : " << val << std::endl;
		break;
    }
    return TRUE;
}

