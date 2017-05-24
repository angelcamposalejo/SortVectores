#include "stdafx.h"  //________________________________________ Acomodador.cpp
#include "Acomodador.h"

int APIENTRY wWinMain(HINSTANCE hInstance, HINSTANCE, LPTSTR cmdLine, int cmdShow) {
	Acomodador app;
	return app.BeginDialog(IDI_Acomodador, hInstance);
}

void Acomodador::Window_Open(Win::Event& e)
{
}

void Acomodador::btInsertar_Click(Win::Event& e)
{
	const double number = tbxEntrada.DoubleValue;
	inputData.push_back(number);
	tbxEntrada.Text = L"";
	tbxEntrada.SetFocus();
	wstring texto;
	Sys::Format(texto, L"%g\r\n", number);
	tbxSalida.Text += texto;
}

void Acomodador::btSort_Click(Win::Event& e)
{
	std::sort(inputData.begin(), inputData.end());
	for (int i = 0; i < inputData.size(); i++)
	{
		if (inputData[i] >= 0)
		{
			wstring texto;
			Sys::Format(texto, L"%g\r\n", inputData[i]);
			tbxAcomodador.Text += texto;
		}
	}
}

