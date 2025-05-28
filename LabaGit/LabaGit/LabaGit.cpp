#include <iostream>

using namespace std;

void Initialize();

void GetPlayerInput();
bool Update();
void Render();

void Shutdown();

int main()
{
	Initialize();

	GetPlayerInput();
	if (!Update())
	{
		return true;
	}
	
	Render();

	Shutdown();
}