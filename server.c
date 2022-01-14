#include <windows.h>
#define APPNAME (L"title")

LRESULT CALLBACK WndProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam);

INT WINAPI WinMain(HINSTANCE hIns, HINSTANCE hPrev, LPSTR cmd, int nShow) {
    
}

LRESULT CALLBACK WndProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam) {
    switch (uMsg)
    {
        case WM_DESTROY:
            PostQuitMessage(0);
            return 0;
        
        case WM_CREATE:


        case WM_PAINT:

    }

    return DefWindowProcW(hwnd, uMsg, wParam, lParam);
}