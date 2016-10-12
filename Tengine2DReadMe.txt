========================================================================
    STATIC LIBRARY : Tengine2D Project Overview
========================================================================

///////////// MY OWN COMMENTS /////////////
///////////////////////////////////////////
## Visual Studio 2013 - SFML 2.4.0
## When You want to use this Engine - 

***** SETTINGS *****
--- All configurations ---
Additional Include Directories: $(SolutionDir), $(SolutionDir)\Tengine2D\Graphics\Includes
--- Debug/Release Mode ---
Additional Library Directories: $(SolutionDir)\Debug, $(SolutionDir)\Release - This is where you keep the Tengine2D.lib
--- Debug Mode ---
Linker Input, Debug: Tengine2D.lib
--- Release Mode ---
Linker Input, Release: Tengine2D.lib

***** FILES *****
Debug_Files: All Required Debug Files. Paste them into the Debug folder after you compile once in debug Mode (Includes Tengine2D.lib)
Release_Files: All Required Release Files. Paste them into the Release folder after you compile once in Release Mode (Includes Tengine2D.lib)

Engine Comes With The Required DLL Files for Release & Debug.


//////////////////////////////////////////
/////////////////////////////////////////
AppWizard has created this Tengine2D library project for you. 

No source files were created as part of your project.


Tengine2D.vcxproj
    This is the main project file for VC++ projects generated using an Application Wizard.
    It contains information about the version of Visual C++ that generated the file, and
    information about the platforms, configurations, and project features selected with the
    Application Wizard.

Tengine2D.vcxproj.filters
    This is the filters file for VC++ projects generated using an Application Wizard. 
    It contains information about the association between the files in your project 
    and the filters. This association is used in the IDE to show grouping of files with
    similar extensions under a specific node (for e.g. ".cpp" files are associated with the
    "Source Files" filter).

/////////////////////////////////////////////////////////////////////////////
Other notes:

AppWizard uses "TODO:" comments to indicate parts of the source code you
should add to or customize.

/////////////////////////////////////////////////////////////////////////////
