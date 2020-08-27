#ifndef __LUAT_CTIOT_H__
#define __LUAT_CTIOT_H__
#include "luat_base.h"

enum
{
	CTIOT_EVENT_REG = 0,
	CTIOT_EVENT_UPDATE,
	CTIOT_EVENT_DEREG,
	CTIOT_EVENT_STATE,
	CTIOT_EVENT_OB19,
	CTIOT_EVENT_TX,
	CTIOT_EVENT_RX,
	CTIOT_EVENT_NOTIFY,
	CTIOT_EVENT_SUSPEND,
	CTIOT_EVENT_FOTA,

	CTIOT_REG_OK = 0,
	CTIOT_REG_TIMEOUT,
	CTIOT_REG_SERVER_REJECT,
	CTIOT_REG_VERSION_ERROR,
	CTIOT_REG_EP_ERROR,
	CTIOT_REG_TX_ERROR,
	CTIOT_REG_STACK_ERROR,
	CTIOT_UPDATE_OK = 0,
	CTIOT_UPDATE_NOT_LOGIN,
	CTIOT_UPDATE_TIMEOUT,
	CTIOT_UPDATE_PARAM_ERROR,
	CTIOT_UPDATE_SERVER_REJECT,
	CTIOT_UPDATE_TX_ERROR,
	CTIOT_DEREG_DONE = 0,
	CTIOT_STATE_TAU_WAKEUP = 0,
	CTIOT_STATE_SS_ERROR,
	CTIOT_STATE_SS_FAIL,
	CTIOT_STATE_SS_STACK_ERROR,
	CTIOT_STATE_TAU_NOTIFY,
	CTIOT_OB19_ON = 0,
	CTIOT_OB19_OFF,
	CTIOT_TX_ACK = 0,
	CTIOT_TX_DONE,
	CTIOT_TX_TIMEOUT,
	CTIOT_TX_SERVER_RST,
	CTIOT_TX_FAIL,
	CTIOT_TX_OTHER_ERROR,
	CTIOT_TX_ERROR,
	CTIOT_NOTIFY_ACK = 0,
	CTIOT_NOTIFY_DONE,
	CTIOT_NOTIFY_TIMEOUT,
	CTIOT_NOTIFY_SERVER_RST,
	CTIOT_NOTIFY_FAIL,
	CTIOT_NOTIFY_OTHER_ERROR,
	CTIOT_NOTIFY_ERROR,
	CTIOT_SUSPEND_QUIT = 0,
	CTIOT_SUSPEND_READY,
	CTIOT_SUSPEND_START,
	CTIOT_FOTA_DOWNLOADING = 0,
	CTIOT_FOTA_DOWNLOAD_FAILED,
	CTIOT_FOTA_DOWNLOAD_SUCCESS,
	CTIOT_FOTA_UPDATING,
	CTIOT_FOTA_UPDATE_SUCCESS,
	CTIOT_FOTA_UPDATE_FAILED,
	CTIOT_FOTA_UPDATE_OVER,
	CTIOT_FOTA_6,
	CTIOT_FOTA_7,
};
typedef void (*luat_ctiot_callback_t)(uint8_t type, uint8_t code, void *buf, uint32_t len);
#endif
