#ifndef CBA_COMMON_SCRIPT_COMPONENT_INCLUDED
#define CBA_COMMON_SCRIPT_COMPONENT_INCLUDED

#define COMPONENT common
#include "\x\cba\addons\main\script_macros.hpp"

#endif

#ifdef DEBUG_MAIN_COMMON
	#define DEBUG
#endif

#ifdef DEBUG_MAIN_COMMON_SETTINGS
	#define DEBUG_SETTINGS DEBUG_MAIN_COMMON_SETTINGS
#endif
#ifndef DEBUG_MAIN_COMMON_SETTINGS
	#define DEBUG_SETTINGS DEFAULT_DEBUG_SETTINGS
#endif
