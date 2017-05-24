#pragma once  //______________________________________ Acomodador.h  
#include "Resource.h"
class Acomodador : public Win::Dialog
{
public:
	Acomodador()
	{
	}
	~Acomodador()
	{
	}
	vector<double>inputData;
protected:
	//______ Wintempla GUI manager section begin: DO NOT EDIT AFTER THIS LINE
	Win::Label lb1;
	Win::Textbox tbxEntrada;
	Win::Button btInsertar;
	Win::Textbox tbxSalida;
	Win::Button btSort;
	Win::Textbox tbxAcomodador;
protected:
	Win::Gdi::Font fontArial014A;
	void GetDialogTemplate(DLGTEMPLATE& dlgTemplate)
	{
		dlgTemplate.cx = Sys::Convert::PixelToDlgUnitX(768);
		dlgTemplate.cy = Sys::Convert::PixelToDlgUnitY(338);
		dlgTemplate.style = WS_CAPTION | WS_POPUP | WS_SYSMENU | WS_VISIBLE | DS_CENTER | DS_MODALFRAME;
	}
	//_________________________________________________
	void InitializeGui()
	{
		this->Text = L"Acomodador";
		lb1.Create(NULL, L"Nuevo Numero", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 9, 8, 107, 25, hWnd, 1000);
		tbxEntrada.Create(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_LEFT | ES_WINNORMALCASE, 8, 34, 108, 25, hWnd, 1001);
		btInsertar.Create(NULL, L"Insertar", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 122, 35, 87, 28, hWnd, 1002);
		tbxSalida.Create(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_AUTOVSCROLL | ES_MULTILINE | ES_READONLY | ES_LEFT | ES_WINNORMALCASE, 213, 36, 217, 289, hWnd, 1003);
		btSort.Create(NULL, L"Sort", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 444, 39, 90, 28, hWnd, 1004);
		tbxAcomodador.Create(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_AUTOVSCROLL | ES_MULTILINE | ES_READONLY | ES_LEFT | ES_WINNORMALCASE, 544, 39, 217, 292, hWnd, 1005);
		fontArial014A.Create(L"Arial", 14, false, false, false, false);
		lb1.Font = fontArial014A;
		tbxEntrada.Font = fontArial014A;
		btInsertar.Font = fontArial014A;
		tbxSalida.Font = fontArial014A;
		btSort.Font = fontArial014A;
		tbxAcomodador.Font = fontArial014A;
	}
	//_________________________________________________
	void btInsertar_Click(Win::Event& e);
	void btSort_Click(Win::Event& e);
	void Window_Open(Win::Event& e);
	//_________________________________________________
	bool EventHandler(Win::Event& e)
	{
		if (btInsertar.IsEvent(e, BN_CLICKED)) { btInsertar_Click(e); return true; }
		if (btSort.IsEvent(e, BN_CLICKED)) { btSort_Click(e); return true; }
		return false;
	}
};
