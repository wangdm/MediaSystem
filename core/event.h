#ifndef _EVENT_H_
#define _EVENT_H_

#include "common.h"

typedef struct wdm_event_s
{
	uint32_t id;
}wdm_event_t;

typedef int (*event_callback_fn)(wdm_event_t * pevent);

typedef struct wdm_listener_s
{
	uint16_t cattype;
	uint16_t type;
	event_callback_fn callback;
}wdm_listener_t;

int trigger_event(wdm_event_t * pevent);
int register_event_listener(wdm_listener_t * listener);
int unregister_event_listener(wdm_listener_t * listener);

#endif