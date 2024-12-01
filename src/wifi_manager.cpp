
#ifdef __cplusplus
extern "C" {
#endif
#include <WiFiManager.h>

WiFiManager wm;
void wm_connect(void);

#ifdef __cplusplus
}
#endif

// definition in a .cpp file:
extern "C" void wm_connect(void) {
  wm.autoConnect();
}