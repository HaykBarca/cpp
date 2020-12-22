// Header guards helps us to prevent multiple time includes of definitions in same file
// which will couse complie errors
#ifndef MULTI_FILES_HEADER_2_H
#define MULTI_FILES_HEADER_2_H

int add();

#endif

// Another common question involves how to include header files from other directories.

// Right click on your project in the Solution Explorer, and choose Properties, then the VC++ Directories tab.
// From here, you will see a line called Include Directories. Add the directories you’d like the compiler to search for additional headers there.