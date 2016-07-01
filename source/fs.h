/*
*   fs.h
*/

#pragma once

#include "types.h"

#define PATTERN(a)      a "_*.bin"

u32 mountFs(void);
u32 fileRead(void *dest, const char *path);
void fileWrite(const void *buffer, const char *path, u32 size);
bool fileExists(const char *path);
void loadPayload(u32 pressed);
void firmRead(void *dest, const char *firmFolder);