#define PREFIX PerformanceMonitor
#define PATH rvn
#define MOD PerformanceMonitor

// Define version information
#define MAJOR 1
#define MINOR 0
#define PATCHLVL 0
#define BUILD 0

#ifdef VERSION
    #undef VERSION
#endif
#ifdef VERSION_AR
    #undef VERSION_AR
#endif
#define VERSION_AR MAJOR,MINOR,PATCHLVL,BUILD
#define VERSION MAJOR.MINOR.PATCHLVL.BUILD

// Do not release with this setting enabled!
// #define DEBUGFULL // Enable all debug methods
// #define ISDEV // Enable better logging
// #define ENABLEPERFORMANCECOUNTER // Enable performance counter for function calls
// #define ENABLEFUNCTIONTRACE // Enable SQF based function tracer
// #define DISABLECOMPRESSION

#include "\tc\CLib\addons\CLib\macros.hpp"
