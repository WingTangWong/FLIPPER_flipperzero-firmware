#pragma once

#ifdef __cplusplus
extern "C" {
#endif

/* Controls for thread handling SHCI & HCI event queues. Used internally. */

void ble_event_thread_start();

void ble_event_thread_stop();

#ifdef __cplusplus
}
#endif