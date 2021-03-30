#pragma once

#include "Image.h"

struct Paths;

struct Options
{
    Options(Paths& aPaths);
    ~Options() = default;
   
    void Load();
    void Save();
    void ResetToDefaults(); 
    
    Image GameImage;
    bool PatchEnableDebug{ false };
    bool PatchRemovePedestrians{ false };
    bool PatchAsyncCompute{ false };
    bool PatchAntialiasing{ false };
    bool PatchSkipStartMenu{ false };
    bool PatchAmdSmt{ false };
    bool PatchDisableIntroMovies{ false };
    bool PatchDisableVignette{ false };
    bool PatchDisableBoundaryTeleport{ false };
    bool PatchDisableWin7Vsync{ false };
    bool DumpGameOptions{ false };
    std::string FontPath;
    std::string FontGlyphRanges{""};
    float FontSize{ 13.0f };
    bool ExeValid{ false };
    bool IsFirstLaunch { true };
    bool RemoveDeadBindings { true };

private:

    Paths& m_paths;
};