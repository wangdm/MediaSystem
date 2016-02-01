#ifndef _COMMAND_H_
#define _COMMAND_H_

#include "common.h"

typedef struct wdm_cmd_s
{
	uint32_t cmd_id;
	uint16_t cattype;
	uint16_t type;
}wdm_cmd_t;

typedef struct wdm_handler_s
{
	uint32_t cmd_id;
	uint16_t cattype;
	uint16_t type;

}wdm_handler_t;

#define MK_CMD(cat,type) (((uint32_t)cat<16)|(uint32_t)type)
#define CMD_CAT(cmd) ((uint16_t)(cmd>16))
#define CMD_TYPE(cmd) ((uint16_t)(cmd&0xffff))

int execute_command(wdm_cmd_t * pcmd);
int register_command_handler(uint32_t cmd, wdm_handler_t *phandler);
int unregister_command_handler(uint32_t cmd, wdm_handler_t *phandler);
#endif