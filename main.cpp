#include <windows.h>

//#define t char*
//typedef BOOL (__stdcall *funcname_ptr)(void * arg1, const char * arg2, DWORD flags, ...);
//#define __stdcall __attribute__((stdcall))
int WINAPI WinMain(HINSTANCE hInst,HINSTANCE hPrev,LPSTR lpCmdLine, int iCmdShow){

   int s =  MessageBox(NULL,"Hi This is my First c++ GUI","Win32 API Say:",6);
   if(s == 10){
        MessageBox(NULL,"Hi This is my First c++ GUI","Win32 API Say:",6);
   }else if(s == 11){
        MessageBox(NULL,"Yes GO On","Win32 API Say:",MB_ICONINFORMATION);
   }else{
        MessageBox(NULL,"GoodBey !!","Win32 API Say:",MB_OK);
   }
    return 0;
}


	//MessageBox(NULL, "Hello C++ win Api." "Notice",MB_OK | MB_ICONEXCLAMATION);

