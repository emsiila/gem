
#pragma once

#include <fstream>

#include "Colour.h"

struct GemConfig
{
	GemConfig();
	void Save();
	void Load(std::istream& stream);

	bool VSync;
	float ResolutionScale;
	std::string DMGPalette;

	// NOTE: these settings aren't meant to be persisted in the ini file, this class
	// basically just holds their values which come from the command line.
	bool NoSound;
	bool ForceDMGMode;
	bool PauseAfterOpen;

	// Keyboard mapping
	int UpKey;
	int DownKey;
	int LeftKey;
	int RightKey;
	int AKey;
	int BKey;
	int StartKey;
	int SelectKey;

	GemColour Colour0;
	GemColour Colour1;
	GemColour Colour2;
	GemColour Colour3;

	static GemConfig& Get();
};