#include <windows.h>


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
