#pragma once
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

// safe to call multiple times (idempotente).
bool evdev_mouse_start(void);
void evdev_mouse_stop(void);

#ifdef __cplusplus
}
#endif
